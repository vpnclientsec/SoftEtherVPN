This is a fork of the open-source [SoftEther VPN](https://github.com/SoftEtherVPN/SoftEtherVPN) project. It has been modified to support [client-side configuration tests](https://github.com/vpnclientsec/vpnclientsec).

# Requirements:
```
sudo apt -y install cmake gcc g++ libncurses5-dev libreadline-dev libssl-dev make zlib1g-dev
```

# Compile:
```
git submodule init && git submodule update
./configure
make -C tmp
```

# Setup 
## Setup test user (test:test)
```
Hub Default
UserCreate test
UserPasswordSet test
```

## Setup SSTP server
```
ServerCertRegenerate
SstpEnable yes
SecureNatEnable
```

## Setup L2TP/IPsec
```
IPsecEnable
```