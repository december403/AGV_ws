;; Auto-generated. Do not edit!


(when (boundp 'agv::targetFeedback)
  (if (not (find-package "AGV"))
    (make-package "AGV"))
  (shadow 'targetFeedback (find-package "AGV")))
(unless (find-package "AGV::TARGETFEEDBACK")
  (make-package "AGV::TARGETFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude targetFeedback.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass agv::targetFeedback
  :super ros::object
  :slots (_progress ))

(defmethod agv::targetFeedback
  (:init
   (&key
    ((:progress __progress) (instance std_msgs::String :init))
    )
   (send-super :init)
   (setq _progress __progress)
   self)
  (:progress
   (&rest __progress)
   (if (keywordp (car __progress))
       (send* _progress __progress)
     (progn
       (if __progress (setq _progress (car __progress)))
       _progress)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/String _progress
    (send _progress :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/String _progress
       (send _progress :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/String _progress
     (send _progress :deserialize buf ptr-) (incf ptr- (send _progress :serialization-length))
   ;;
   self)
  )

(setf (get agv::targetFeedback :md5sum-) "84c8ded4cc051789ccfd80bf9239d5e9")
(setf (get agv::targetFeedback :datatype-) "agv/targetFeedback")
(setf (get agv::targetFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
std_msgs/String progress

================================================================================
MSG: std_msgs/String
string data

")



(provide :agv/targetFeedback "84c8ded4cc051789ccfd80bf9239d5e9")


