/*
 * event.h
 *
 *  Created on: Jun 8, 2013
 *      Author: nathan
 */

#ifndef EVENT_H_
#define EVENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <linux/if.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "prefix.h"
#include "interface.h"
#include "load.h"
#include "neighbor.h"
#include "packet.h"
#include "utility.h"
#include "replay.h"

struct ospf_event {
	struct replay_object *object;
	struct timespec ts;
	u_int8_t type;
};

#define OSPF_EVENT_HELLO_BROADCAST 0

void check_events();
void add_event(struct replay_object*,u_int8_t);
void remove_event(struct ospf_event*);

#endif /* EVENT_H_ */