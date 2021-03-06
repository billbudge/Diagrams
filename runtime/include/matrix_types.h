// Copyright 2015 Native Client Authors.

#ifndef RUNTIME_INCLUDE_H_
#define RUNTIME_INCLUDE_H_

// we extensively use Eigen through out the project
// for vector and matrices (and geometric transformation)
#include <Eigen/Core>
#include <Eigen/Geometry>

namespace diagrammar {
typedef ::Eigen::Vector2f Vector2f;
typedef ::Eigen::Vector3f Vector3f;
typedef ::Eigen::Matrix2f Matrix2f;
typedef ::Eigen::Matrix3f Matrix3f;
typedef ::Eigen::Matrix4f Matrix4f;
typedef ::Eigen::Isometry2f Isometry2f;
typedef ::Eigen::Isometry3f Isometry3f;
typedef ::Eigen::AngleAxisf AngleAxisf;
typedef ::Eigen::Quaternionf Quaternionf;
}  // namespace diagrammar

#endif  // RUNTIME_INCLUDE_H_
