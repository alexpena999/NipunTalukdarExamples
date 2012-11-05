/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef FileService_H
#define FileService_H

#include <TProcessor.h>
#include "filehandler_types.h"

namespace FileHandler {

class FileServiceIf {
 public:
  virtual ~FileServiceIf() {}
  virtual int32_t createFile(const Work& w) = 0;
  virtual void getFiles(std::vector<std::string> & _return, const Work& w) = 0;
};

class FileServiceIfFactory {
 public:
  typedef FileServiceIf Handler;

  virtual ~FileServiceIfFactory() {}

  virtual FileServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(FileServiceIf* /* handler */) = 0;
};

class FileServiceIfSingletonFactory : virtual public FileServiceIfFactory {
 public:
  FileServiceIfSingletonFactory(const boost::shared_ptr<FileServiceIf>& iface) : iface_(iface) {}
  virtual ~FileServiceIfSingletonFactory() {}

  virtual FileServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(FileServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<FileServiceIf> iface_;
};

class FileServiceNull : virtual public FileServiceIf {
 public:
  virtual ~FileServiceNull() {}
  int32_t createFile(const Work& /* w */) {
    int32_t _return = 0;
    return _return;
  }
  void getFiles(std::vector<std::string> & /* _return */, const Work& /* w */) {
    return;
  }
};

typedef struct _FileService_createFile_args__isset {
  _FileService_createFile_args__isset() : w(false) {}
  bool w;
} _FileService_createFile_args__isset;

class FileService_createFile_args {
 public:

  FileService_createFile_args() {
  }

  virtual ~FileService_createFile_args() throw() {}

  Work w;

  _FileService_createFile_args__isset __isset;

  void __set_w(const Work& val) {
    w = val;
  }

  bool operator == (const FileService_createFile_args & rhs) const
  {
    if (!(w == rhs.w))
      return false;
    return true;
  }
  bool operator != (const FileService_createFile_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileService_createFile_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class FileService_createFile_pargs {
 public:


  virtual ~FileService_createFile_pargs() throw() {}

  const Work* w;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _FileService_createFile_result__isset {
  _FileService_createFile_result__isset() : success(false), badop(false) {}
  bool success;
  bool badop;
} _FileService_createFile_result__isset;

class FileService_createFile_result {
 public:

  FileService_createFile_result() : success(0) {
  }

  virtual ~FileService_createFile_result() throw() {}

  int32_t success;
  BadOperation badop;

  _FileService_createFile_result__isset __isset;

  void __set_success(const int32_t val) {
    success = val;
  }

  void __set_badop(const BadOperation& val) {
    badop = val;
  }

  bool operator == (const FileService_createFile_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(badop == rhs.badop))
      return false;
    return true;
  }
  bool operator != (const FileService_createFile_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileService_createFile_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _FileService_createFile_presult__isset {
  _FileService_createFile_presult__isset() : success(false), badop(false) {}
  bool success;
  bool badop;
} _FileService_createFile_presult__isset;

class FileService_createFile_presult {
 public:


  virtual ~FileService_createFile_presult() throw() {}

  int32_t* success;
  BadOperation badop;

  _FileService_createFile_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _FileService_getFiles_args__isset {
  _FileService_getFiles_args__isset() : w(false) {}
  bool w;
} _FileService_getFiles_args__isset;

class FileService_getFiles_args {
 public:

  FileService_getFiles_args() {
  }

  virtual ~FileService_getFiles_args() throw() {}

  Work w;

  _FileService_getFiles_args__isset __isset;

  void __set_w(const Work& val) {
    w = val;
  }

  bool operator == (const FileService_getFiles_args & rhs) const
  {
    if (!(w == rhs.w))
      return false;
    return true;
  }
  bool operator != (const FileService_getFiles_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileService_getFiles_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class FileService_getFiles_pargs {
 public:


  virtual ~FileService_getFiles_pargs() throw() {}

  const Work* w;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _FileService_getFiles_result__isset {
  _FileService_getFiles_result__isset() : success(false), badop(false) {}
  bool success;
  bool badop;
} _FileService_getFiles_result__isset;

class FileService_getFiles_result {
 public:

  FileService_getFiles_result() {
  }

  virtual ~FileService_getFiles_result() throw() {}

  std::vector<std::string>  success;
  BadOperation badop;

  _FileService_getFiles_result__isset __isset;

  void __set_success(const std::vector<std::string> & val) {
    success = val;
  }

  void __set_badop(const BadOperation& val) {
    badop = val;
  }

  bool operator == (const FileService_getFiles_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(badop == rhs.badop))
      return false;
    return true;
  }
  bool operator != (const FileService_getFiles_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileService_getFiles_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _FileService_getFiles_presult__isset {
  _FileService_getFiles_presult__isset() : success(false), badop(false) {}
  bool success;
  bool badop;
} _FileService_getFiles_presult__isset;

class FileService_getFiles_presult {
 public:


  virtual ~FileService_getFiles_presult() throw() {}

  std::vector<std::string> * success;
  BadOperation badop;

  _FileService_getFiles_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class FileServiceClient : virtual public FileServiceIf {
 public:
  FileServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  FileServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t createFile(const Work& w);
  void send_createFile(const Work& w);
  int32_t recv_createFile();
  void getFiles(std::vector<std::string> & _return, const Work& w);
  void send_getFiles(const Work& w);
  void recv_getFiles(std::vector<std::string> & _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class FileServiceProcessor : public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<FileServiceIf> iface_;
  virtual bool process_fn(apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid, void* callContext);
 private:
  std::map<std::string, void (FileServiceProcessor::*)(int32_t, apache::thrift::protocol::TProtocol*, apache::thrift::protocol::TProtocol*, void*)> processMap_;
  void process_createFile(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getFiles(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  FileServiceProcessor(boost::shared_ptr<FileServiceIf> iface) :
    iface_(iface) {
    processMap_["createFile"] = &FileServiceProcessor::process_createFile;
    processMap_["getFiles"] = &FileServiceProcessor::process_getFiles;
  }

  virtual bool process(boost::shared_ptr<apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr<apache::thrift::protocol::TProtocol> poprot, void* callContext);
  virtual ~FileServiceProcessor() {}
};

class FileServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  FileServiceProcessorFactory(const ::boost::shared_ptr< FileServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< FileServiceIfFactory > handlerFactory_;
};

class FileServiceMultiface : virtual public FileServiceIf {
 public:
  FileServiceMultiface(std::vector<boost::shared_ptr<FileServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~FileServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<FileServiceIf> > ifaces_;
  FileServiceMultiface() {}
  void add(boost::shared_ptr<FileServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int32_t createFile(const Work& w) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->createFile(w);
      } else {
        ifaces_[i]->createFile(w);
      }
    }
  }

  void getFiles(std::vector<std::string> & _return, const Work& w) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getFiles(_return, w);
        return;
      } else {
        ifaces_[i]->getFiles(_return, w);
      }
    }
  }

};

} // namespace

#endif
