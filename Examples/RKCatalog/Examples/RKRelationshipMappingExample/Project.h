//
//  Project.h
//  RKCatalog
//
//  Created by Blake Watters on 4/21/11.
//  Copyright 2011 Two Toasters. All rights reserved.
//

#import "RKCatalog.h"
#import "User.h"

@interface Project : RKObject {
    NSNumber* _projectID;
    NSString* _name;
    NSString* _description;
    User* _user;
    NSArray* _tasks;
}

@property (nonatomic, retain) NSNumber* projectID;
@property (nonatomic, retain) NSString* name;
@property (nonatomic, retain) NSString* description;
@property (nonatomic, retain) User* user;
@property (nonatomic, retain) NSArray* tasks;

@end
