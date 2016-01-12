/** @file
 *	@brief MAVLink comm protocol testsuite generated from ros.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef ROS_TESTSUITE_H
#define ROS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ros(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_ardupilotmega(system_id, component_id, last_msg);
	mavlink_test_ros(system_id, component_id, last_msg);
}
#endif

#include "../ardupilotmega/testsuite.h"


static void mavlink_test_ros_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_ros_state_t packet_in = {
		5,72
    };
	mavlink_ros_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.state = packet_in.state;
        	packet1.node_count = packet_in.node_count;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_state_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_ros_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_state_pack(system_id, component_id, &msg , packet1.state , packet1.node_count );
	mavlink_msg_ros_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.state , packet1.node_count );
	mavlink_msg_ros_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_ros_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_state_send(MAVLINK_COMM_1 , packet1.state , packet1.node_count );
	mavlink_msg_ros_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ros_node_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_ros_node_state_t packet_in = {
		5,72
    };
	mavlink_ros_node_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.node_id = packet_in.node_id;
        	packet1.state = packet_in.state;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_node_state_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_ros_node_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_node_state_pack(system_id, component_id, &msg , packet1.node_id , packet1.state );
	mavlink_msg_ros_node_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_node_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.node_id , packet1.state );
	mavlink_msg_ros_node_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_ros_node_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ros_node_state_send(MAVLINK_COMM_1 , packet1.node_id , packet1.state );
	mavlink_msg_ros_node_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_rpg_svo_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_rpg_svo_info_t packet_in = {
		17.0,17443,17547,29
    };
	mavlink_rpg_svo_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.processing_time = packet_in.processing_time;
        	packet1.num_matches = packet_in.num_matches;
        	packet1.tracking_quality = packet_in.tracking_quality;
        	packet1.stage = packet_in.stage;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_rpg_svo_info_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_rpg_svo_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_rpg_svo_info_pack(system_id, component_id, &msg , packet1.processing_time , packet1.num_matches , packet1.tracking_quality , packet1.stage );
	mavlink_msg_rpg_svo_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_rpg_svo_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.processing_time , packet1.num_matches , packet1.tracking_quality , packet1.stage );
	mavlink_msg_rpg_svo_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_rpg_svo_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_rpg_svo_info_send(MAVLINK_COMM_1 , packet1.processing_time , packet1.num_matches , packet1.tracking_quality , packet1.stage );
	mavlink_msg_rpg_svo_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ros(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_ros_state(system_id, component_id, last_msg);
	mavlink_test_ros_node_state(system_id, component_id, last_msg);
	mavlink_test_rpg_svo_info(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ROS_TESTSUITE_H
