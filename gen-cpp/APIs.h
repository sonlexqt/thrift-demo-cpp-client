/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef APIs_H
#define APIs_H

#include <thrift/TDispatchProcessor.h>
#include "thriftDemo_types.h"

namespace thriftDemo {

class APIsIf {
 public:
  virtual ~APIsIf() {}
  virtual bool put(const std::string& _username, const int32_t _newValue) = 0;
  virtual bool increase(const std::string& _username) = 0;
  virtual int32_t get(const std::string& _username) = 0;
  virtual bool ping() = 0;
};

class APIsIfFactory {
 public:
  typedef APIsIf Handler;

  virtual ~APIsIfFactory() {}

  virtual APIsIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(APIsIf* /* handler */) = 0;
};

class APIsIfSingletonFactory : virtual public APIsIfFactory {
 public:
  APIsIfSingletonFactory(const boost::shared_ptr<APIsIf>& iface) : iface_(iface) {}
  virtual ~APIsIfSingletonFactory() {}

  virtual APIsIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(APIsIf* /* handler */) {}

 protected:
  boost::shared_ptr<APIsIf> iface_;
};

class APIsNull : virtual public APIsIf {
 public:
  virtual ~APIsNull() {}
  bool put(const std::string& /* _username */, const int32_t /* _newValue */) {
    bool _return = false;
    return _return;
  }
  bool increase(const std::string& /* _username */) {
    bool _return = false;
    return _return;
  }
  int32_t get(const std::string& /* _username */) {
    int32_t _return = 0;
    return _return;
  }
  bool ping() {
    bool _return = false;
    return _return;
  }
};

typedef struct _APIs_put_args__isset {
  _APIs_put_args__isset() : _username(false), _newValue(false) {}
  bool _username :1;
  bool _newValue :1;
} _APIs_put_args__isset;

class APIs_put_args {
 public:

  static const char* ascii_fingerprint; // = "EEBC915CE44901401D881E6091423036";
  static const uint8_t binary_fingerprint[16]; // = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

  APIs_put_args(const APIs_put_args&);
  APIs_put_args& operator=(const APIs_put_args&);
  APIs_put_args() : _username(), _newValue(0) {
  }

  virtual ~APIs_put_args() throw();
  std::string _username;
  int32_t _newValue;

  _APIs_put_args__isset __isset;

  void __set__username(const std::string& val);

  void __set__newValue(const int32_t val);

  bool operator == (const APIs_put_args & rhs) const
  {
    if (!(_username == rhs._username))
      return false;
    if (!(_newValue == rhs._newValue))
      return false;
    return true;
  }
  bool operator != (const APIs_put_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_put_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_put_args& obj);
};


class APIs_put_pargs {
 public:

  static const char* ascii_fingerprint; // = "EEBC915CE44901401D881E6091423036";
  static const uint8_t binary_fingerprint[16]; // = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};


  virtual ~APIs_put_pargs() throw();
  const std::string* _username;
  const int32_t* _newValue;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_put_pargs& obj);
};

typedef struct _APIs_put_result__isset {
  _APIs_put_result__isset() : success(false) {}
  bool success :1;
} _APIs_put_result__isset;

class APIs_put_result {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};

  APIs_put_result(const APIs_put_result&);
  APIs_put_result& operator=(const APIs_put_result&);
  APIs_put_result() : success(0) {
  }

  virtual ~APIs_put_result() throw();
  bool success;

  _APIs_put_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const APIs_put_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const APIs_put_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_put_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_put_result& obj);
};

typedef struct _APIs_put_presult__isset {
  _APIs_put_presult__isset() : success(false) {}
  bool success :1;
} _APIs_put_presult__isset;

class APIs_put_presult {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};


  virtual ~APIs_put_presult() throw();
  bool* success;

  _APIs_put_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const APIs_put_presult& obj);
};

typedef struct _APIs_increase_args__isset {
  _APIs_increase_args__isset() : _username(false) {}
  bool _username :1;
} _APIs_increase_args__isset;

class APIs_increase_args {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  APIs_increase_args(const APIs_increase_args&);
  APIs_increase_args& operator=(const APIs_increase_args&);
  APIs_increase_args() : _username() {
  }

  virtual ~APIs_increase_args() throw();
  std::string _username;

  _APIs_increase_args__isset __isset;

  void __set__username(const std::string& val);

  bool operator == (const APIs_increase_args & rhs) const
  {
    if (!(_username == rhs._username))
      return false;
    return true;
  }
  bool operator != (const APIs_increase_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_increase_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_increase_args& obj);
};


class APIs_increase_pargs {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};


  virtual ~APIs_increase_pargs() throw();
  const std::string* _username;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_increase_pargs& obj);
};

typedef struct _APIs_increase_result__isset {
  _APIs_increase_result__isset() : success(false) {}
  bool success :1;
} _APIs_increase_result__isset;

class APIs_increase_result {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};

  APIs_increase_result(const APIs_increase_result&);
  APIs_increase_result& operator=(const APIs_increase_result&);
  APIs_increase_result() : success(0) {
  }

  virtual ~APIs_increase_result() throw();
  bool success;

  _APIs_increase_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const APIs_increase_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const APIs_increase_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_increase_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_increase_result& obj);
};

typedef struct _APIs_increase_presult__isset {
  _APIs_increase_presult__isset() : success(false) {}
  bool success :1;
} _APIs_increase_presult__isset;

class APIs_increase_presult {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};


  virtual ~APIs_increase_presult() throw();
  bool* success;

  _APIs_increase_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const APIs_increase_presult& obj);
};

typedef struct _APIs_get_args__isset {
  _APIs_get_args__isset() : _username(false) {}
  bool _username :1;
} _APIs_get_args__isset;

class APIs_get_args {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  APIs_get_args(const APIs_get_args&);
  APIs_get_args& operator=(const APIs_get_args&);
  APIs_get_args() : _username() {
  }

  virtual ~APIs_get_args() throw();
  std::string _username;

  _APIs_get_args__isset __isset;

  void __set__username(const std::string& val);

  bool operator == (const APIs_get_args & rhs) const
  {
    if (!(_username == rhs._username))
      return false;
    return true;
  }
  bool operator != (const APIs_get_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_get_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_get_args& obj);
};


class APIs_get_pargs {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};


  virtual ~APIs_get_pargs() throw();
  const std::string* _username;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_get_pargs& obj);
};

typedef struct _APIs_get_result__isset {
  _APIs_get_result__isset() : success(false) {}
  bool success :1;
} _APIs_get_result__isset;

class APIs_get_result {
 public:

  static const char* ascii_fingerprint; // = "32183C4A04E706C58ED2F62566DDD8DE";
  static const uint8_t binary_fingerprint[16]; // = {0x32,0x18,0x3C,0x4A,0x04,0xE7,0x06,0xC5,0x8E,0xD2,0xF6,0x25,0x66,0xDD,0xD8,0xDE};

  APIs_get_result(const APIs_get_result&);
  APIs_get_result& operator=(const APIs_get_result&);
  APIs_get_result() : success(0) {
  }

  virtual ~APIs_get_result() throw();
  int32_t success;

  _APIs_get_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const APIs_get_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const APIs_get_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_get_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_get_result& obj);
};

typedef struct _APIs_get_presult__isset {
  _APIs_get_presult__isset() : success(false) {}
  bool success :1;
} _APIs_get_presult__isset;

class APIs_get_presult {
 public:

  static const char* ascii_fingerprint; // = "32183C4A04E706C58ED2F62566DDD8DE";
  static const uint8_t binary_fingerprint[16]; // = {0x32,0x18,0x3C,0x4A,0x04,0xE7,0x06,0xC5,0x8E,0xD2,0xF6,0x25,0x66,0xDD,0xD8,0xDE};


  virtual ~APIs_get_presult() throw();
  int32_t* success;

  _APIs_get_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const APIs_get_presult& obj);
};


class APIs_ping_args {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  APIs_ping_args(const APIs_ping_args&);
  APIs_ping_args& operator=(const APIs_ping_args&);
  APIs_ping_args() {
  }

  virtual ~APIs_ping_args() throw();

  bool operator == (const APIs_ping_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const APIs_ping_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_ping_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_ping_args& obj);
};


class APIs_ping_pargs {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~APIs_ping_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_ping_pargs& obj);
};

typedef struct _APIs_ping_result__isset {
  _APIs_ping_result__isset() : success(false) {}
  bool success :1;
} _APIs_ping_result__isset;

class APIs_ping_result {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};

  APIs_ping_result(const APIs_ping_result&);
  APIs_ping_result& operator=(const APIs_ping_result&);
  APIs_ping_result() : success(0) {
  }

  virtual ~APIs_ping_result() throw();
  bool success;

  _APIs_ping_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const APIs_ping_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const APIs_ping_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const APIs_ping_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const APIs_ping_result& obj);
};

typedef struct _APIs_ping_presult__isset {
  _APIs_ping_presult__isset() : success(false) {}
  bool success :1;
} _APIs_ping_presult__isset;

class APIs_ping_presult {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};


  virtual ~APIs_ping_presult() throw();
  bool* success;

  _APIs_ping_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const APIs_ping_presult& obj);
};

class APIsClient : virtual public APIsIf {
 public:
  APIsClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  APIsClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool put(const std::string& _username, const int32_t _newValue);
  void send_put(const std::string& _username, const int32_t _newValue);
  bool recv_put();
  bool increase(const std::string& _username);
  void send_increase(const std::string& _username);
  bool recv_increase();
  int32_t get(const std::string& _username);
  void send_get(const std::string& _username);
  int32_t recv_get();
  bool ping();
  void send_ping();
  bool recv_ping();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class APIsProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<APIsIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (APIsProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_put(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_increase(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_get(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_ping(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  APIsProcessor(boost::shared_ptr<APIsIf> iface) :
    iface_(iface) {
    processMap_["put"] = &APIsProcessor::process_put;
    processMap_["increase"] = &APIsProcessor::process_increase;
    processMap_["get"] = &APIsProcessor::process_get;
    processMap_["ping"] = &APIsProcessor::process_ping;
  }

  virtual ~APIsProcessor() {}
};

class APIsProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  APIsProcessorFactory(const ::boost::shared_ptr< APIsIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< APIsIfFactory > handlerFactory_;
};

class APIsMultiface : virtual public APIsIf {
 public:
  APIsMultiface(std::vector<boost::shared_ptr<APIsIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~APIsMultiface() {}
 protected:
  std::vector<boost::shared_ptr<APIsIf> > ifaces_;
  APIsMultiface() {}
  void add(boost::shared_ptr<APIsIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool put(const std::string& _username, const int32_t _newValue) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->put(_username, _newValue);
    }
    return ifaces_[i]->put(_username, _newValue);
  }

  bool increase(const std::string& _username) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->increase(_username);
    }
    return ifaces_[i]->increase(_username);
  }

  int32_t get(const std::string& _username) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->get(_username);
    }
    return ifaces_[i]->get(_username);
  }

  bool ping() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ping();
    }
    return ifaces_[i]->ping();
  }

};

} // namespace

#endif
