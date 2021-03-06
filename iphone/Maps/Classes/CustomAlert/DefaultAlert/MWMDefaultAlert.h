#import "MWMAlert.h"

@interface MWMDefaultAlert : MWMAlert

+ (instancetype)routeNotFoundAlert;
+ (instancetype)routeFileNotExistAlert;
+ (instancetype)endPointNotFoundAlert;
+ (instancetype)startPointNotFoundAlert;
+ (instancetype)internalRoutingErrorAlert;
+ (instancetype)incorrectFeauturePositionAlert;
+ (instancetype)internalErrorAlert;
+ (instancetype)notEnoughSpaceAlert;
+ (instancetype)invalidUserNameOrPasswordAlert;
+ (instancetype)noCurrentPositionAlert;
+ (instancetype)pointsInDifferentMWMAlert;
+ (instancetype)disabledLocationAlert;
+ (instancetype)noWiFiAlertWithOkBlock:(MWMVoidBlock)okBlock;
+ (instancetype)noConnectionAlert;
+ (instancetype)migrationProhibitedAlert;
+ (instancetype)deleteMapProhibitedAlert;
+ (instancetype)unsavedEditsAlertWithOkBlock:(MWMVoidBlock)okBlock;
+ (instancetype)locationServiceNotSupportedAlert;
+ (instancetype)point2PointAlertWithOkBlock:(MWMVoidBlock)okBlock needToRebuild:(BOOL)needToRebuild;
+ (instancetype)disableAutoDownloadAlertWithOkBlock:(MWMVoidBlock)okBlock;
+ (instancetype)downloaderNoConnectionAlertWithOkBlock:(MWMVoidBlock)okBlock
                                           cancelBlock:(MWMVoidBlock)cancelBlock;
+ (instancetype)downloaderNotEnoughSpaceAlert;
+ (instancetype)downloaderInternalErrorAlertWithOkBlock:(MWMVoidBlock)okBlock
                                            cancelBlock:(MWMVoidBlock)cancelBlock;
+ (instancetype)downloaderNeedUpdateAlertWithOkBlock:(MWMVoidBlock)okBlock;
+ (instancetype)routingMigrationAlertWithOkBlock:(MWMVoidBlock)okBlock;
+ (instancetype)resetChangesAlertWithBlock:(MWMVoidBlock)block;
+ (instancetype)deleteFeatureAlertWithBlock:(MWMVoidBlock)block;
+ (instancetype)personalInfoWarningAlertWithBlock:(MWMVoidBlock)block;
+ (instancetype)trackWarningAlertWithCancelBlock:(MWMVoidBlock)block;

@end
