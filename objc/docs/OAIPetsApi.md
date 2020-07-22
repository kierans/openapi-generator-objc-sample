# OAIPetsApi

All URIs are relative to *http://petstore.swagger.io/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPets**](OAIPetsApi.md#createpets) | **POST** /pets | Create a pet
[**listPets**](OAIPetsApi.md#listpets) | **GET** /pets | List all pets
[**showPetById**](OAIPetsApi.md#showpetbyid) | **GET** /pets/{petId} | Info for a specific pet


# **createPets**
```objc
-(NSURLSessionTask*) createPetsWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Create a pet

### Example 
```objc


OAIPetsApi*apiInstance = [[OAIPetsApi alloc] init];

// Create a pet
[apiInstance createPetsWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIPetsApi->createPets: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listPets**
```objc
-(NSURLSessionTask*) listPetsWithLimit: (NSNumber*) limit
        completionHandler: (void (^)(NSArray<OAIPet>* output, NSError* error)) handler;
```

List all pets

### Example 
```objc

NSNumber* limit = @56; // How many items to return at one time (max 100) (optional)

OAIPetsApi*apiInstance = [[OAIPetsApi alloc] init];

// List all pets
[apiInstance listPetsWithLimit:limit
          completionHandler: ^(NSArray<OAIPet>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIPetsApi->listPets: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **NSNumber***| How many items to return at one time (max 100) | [optional] 

### Return type

[**NSArray<OAIPet>***](OAIPet.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **showPetById**
```objc
-(NSURLSessionTask*) showPetByIdWithPetId: (NSString*) petId
    microchip: (NSNumber*) microchip
        completionHandler: (void (^)(OAIPet* output, NSError* error)) handler;
```

Info for a specific pet

### Example 
```objc

NSString* petId = @"petId_example"; // The id of the pet to retrieve
NSNumber* microchip = @(NO); // If the pet has been microchipped (optional) (default to @(NO))

OAIPetsApi*apiInstance = [[OAIPetsApi alloc] init];

// Info for a specific pet
[apiInstance showPetByIdWithPetId:petId
              microchip:microchip
          completionHandler: ^(OAIPet* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIPetsApi->showPetById: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **petId** | **NSString***| The id of the pet to retrieve | 
 **microchip** | **NSNumber***| If the pet has been microchipped | [optional] [default to @(NO)]

### Return type

[**OAIPet***](OAIPet.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

