#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Swagger Petstore
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol OAIError
@end

@interface OAIError : OAIObject


@property(nonatomic) NSNumber* code;

@property(nonatomic) NSString* message;

@end