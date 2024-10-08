/* Copyright (c) 2023-2024. The SWAT Team. All rights reserved.          */

/* This program is free software; you can redistribute it and/or modify it
 * under the terms of the license (GNU LGPL) which comes with this package. */

#ifndef __DTLMOD_ENGINE_STAGING_HPP__
#define __DTLMOD_ENGINE_STAGING_HPP__

#include "dtlmod/Engine.hpp"
#include "dtlmod/MailboxTransport.hpp"
#include "dtlmod/MessageQueueTransport.hpp"

XBT_LOG_EXTERNAL_CATEGORY(dtlmod);

namespace dtlmod {

/// \cond EXCLUDE_FROM_DOCUMENTATION
class StagingEngine : public Engine {
public:
  explicit StagingEngine(const std::string& name, Stream* stream) : Engine(name, stream, Engine::Type::Staging) {}

  void create_transport(const Transport::Method& transport_method);
};
/// \endcond

} // namespace dtlmod
#endif
