#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#define DB_SCRIPT_PATH "/root/vpntest/vpnclientsec/webservice/db.py"
#define DATA_TEMPLATE "\"{\\\"username\\\": \\\"\\\", \\\"ip\\\": \\\"%s\\\", \\\"protocol\\\": \\\"%s\\\", \\\"result\\\": \\\"%s\\\"}\""
#define DB_UPDATE_TEMPLATE DB_SCRIPT_PATH " -o update -d " DATA_TEMPLATE

#define PROTO_SOFTETHER "softether"
#define PROTO_L2TP "l2tp/ipsec"
#define PROTO_SSTP "sstp"

#define RESULT_NO_SERVER_VERIFICATION "Your client does not verify the server's certificate."
#define RESULT_WEAK_PRESHARED_KEY "Your client uses weak preshared key for IPsec."

#endif  // TEST_UTILS_H