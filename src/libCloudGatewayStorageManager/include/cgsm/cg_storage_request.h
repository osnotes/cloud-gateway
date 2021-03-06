/*
 * This file is part of Nuage Labs SAS's Cloud Gateway.
 *
 * Copyright (C) 2011-2017  Nuage Labs SAS
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * In addition, for the avoidance of any doubt, permission is granted to
 * link this program with OpenSSL and to (re)distribute the binaries
 * produced as the result of such linking.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef CLOUD_GATEWAY_STORAGE_REQUEST_H_
#define CLOUD_GATEWAY_STORAGE_REQUEST_H_

#include "cg_storage_connection.h"
#include "cg_storage_connection_internals.h"

int cg_storage_request_cb_low_lookup_child(cg_storage_request * request);
int cg_storage_request_cb_low_getattr(cg_storage_request * request);
int cg_storage_request_cb_low_setattr(cg_storage_request * request);
int cg_storage_request_cb_low_readdir(cg_storage_request * request);
int cg_storage_request_cb_low_create_and_open(cg_storage_request * request);
int cg_storage_request_cb_low_open(cg_storage_request * request);
int cg_storage_request_cb_low_notify_write(cg_storage_request * request);
int cg_storage_request_cb_low_release(cg_storage_request * request);
int cg_storage_request_cb_low_mkdir(cg_storage_request * request);
int cg_storage_request_cb_low_rmdir(cg_storage_request * request);
int cg_storage_request_cb_low_unlink(cg_storage_request * request);
int cg_storage_request_cb_low_rename(cg_storage_request * request);
int cg_storage_request_cb_low_hardlink(cg_storage_request * request);
int cg_storage_request_cb_low_symlink(cg_storage_request * request);
int cg_storage_request_cb_low_readlink(cg_storage_request * request);

#endif /* CLOUD_GATEWAY_STORAGE_REQUEST_H_ */
