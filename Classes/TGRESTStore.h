//
//  TGRESTAbstractStore.h
//  
//
//  Created by John Tumminaro on 4/26/14.
//
//

#import <Foundation/Foundation.h>

@class TGRESTServer;
@class TGRESTResource;

extern NSString * const TGRESTStoreErrorDomain;
extern NSUInteger const TGRESTStoreUnknownErrorCode;
extern NSUInteger const TGRESTStoreObjectAlreadyDeletedErrorCode;
extern NSUInteger const TGRESTStoreObjectNotFoundErrorCode;
extern NSUInteger const TGRESTStoreBadRequestErrorCode;

@interface TGRESTStore : NSObject

@property (nonatomic, weak) TGRESTServer *server;

- (NSUInteger)countOfObjectsForResource:(TGRESTResource *)resource;

- (NSDictionary *)getDataForObjectOfResource:(TGRESTResource *)resource
                              withPrimaryKey:(NSString *)primaryKey
                                       error:(NSError * __autoreleasing *)error;

- (NSArray *)getDataForObjectsOfResource:(TGRESTResource *)resource
                                  withParent:(TGRESTResource *)parent
                            parentPrimaryKey:(NSString *)key
                                       error:(NSError * __autoreleasing *)error;

- (NSArray *)getAllObjectsForResource:(TGRESTResource *)resource
                                error:(NSError * __autoreleasing *)error;

- (NSDictionary *)createNewObjectForResource:(TGRESTResource *)resource
                              withProperties:(NSDictionary *)properties
                                       error:(NSError * __autoreleasing *)error;

- (NSDictionary *)modifyObjectOfResource:(TGRESTResource *)resource
                          withPrimaryKey:(NSString *)primaryKey
                          withProperties:(NSDictionary *)properties
                                   error:(NSError * __autoreleasing *)error;

- (BOOL)deleteObjectOfResource:(TGRESTResource *)resource
                withPrimaryKey:(NSString *)primaryKey
                         error:(NSError * __autoreleasing *)error;

- (void)addResource:(TGRESTResource *)resource;

- (void)dropResource:(TGRESTResource *)resource;

@end
