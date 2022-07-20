//
//  MagicalRecord.h
//
//  Created by Saul Mora on 28/07/10.
//  Copyright 2010 Magical Panda Software, LLC All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

//! Project version number for MagicalRecord.
FOUNDATION_EXPORT double MagicalRecordVersionNumber;

//! Project version string for MagicalRecord.
FOUNDATION_EXPORT const unsigned char MagicalRecordVersionString[];

#import "../MagicalRecord/Core/MagicalRecordXcode7CompatibilityMacros.h"
#import "../MagicalRecord/Core/MagicalRecordInternal.h"
#import "../MagicalRecord/Core/MagicalRecordLogging.h"

#import <../MagicalRecord/Core/MagicalRecord+Actions.h>
#import <../MagicalRecord/Core/MagicalRecord+ErrorHandling.h>
#import <../MagicalRecord/Core/MagicalRecord+Options.h>
#import <../MagicalRecord/Core/MagicalRecord+Setup.h>
#import <../MagicalRecord/Core/MagicalRecord+iCloud.h>

#import <../MagicalRecord/Categories/NSManagedObject/NSManagedObject+MagicalRecord.h>
#import <../MagicalRecord/Categories/NSManagedObject/NSManagedObject+MagicalRequests.h>
#import <../MagicalRecord/Categories/NSManagedObject/NSManagedObject+MagicalFinders.h>
#import <../MagicalRecord/Categories/NSManagedObject/NSManagedObject+MagicalAggregation.h>
#import <../MagicalRecord/Categories/NSManagedObjectContext/NSManagedObjectContext+MagicalRecord.h>
#import <../MagicalRecord/Categories/NSManagedObjectContext/NSManagedObjectContext+MagicalChainSave.h>
#import <../MagicalRecord/Categories/NSManagedObjectContext/NSManagedObjectContext+MagicalObserving.h>
#import <../MagicalRecord/Categories/NSManagedObjectContext/NSManagedObjectContext+MagicalSaves.h>
#import <../MagicalRecord/Categories/NSManagedObjectContext/NSManagedObjectContext+MagicalThreading.h>
#import <../MagicalRecord/Categories/NSPersistentStoreCoordinator+MagicalRecord.h>
#import <../MagicalRecord/Categories/NSManagedObjectModel+MagicalRecord.h>
#import <../MagicalRecord/Categories/NSPersistentStore+MagicalRecord.h>

#import <../MagicalRecord/Categories/DataImport/MagicalImportFunctions.h>
#import <../MagicalRecord/Categories/NSManagedObject/NSManagedObject+MagicalDataImport.h>
#import <../MagicalRecord/Categories/DataImport/NSNumber+MagicalDataImport.h>
#import <../MagicalRecord/Categories/DataImport/NSObject+MagicalDataImport.h>
#import <../MagicalRecord/Categories/DataImport/NSString+MagicalDataImport.h>
#import <../MagicalRecord/Categories/DataImport/NSAttributeDescription+MagicalDataImport.h>
#import <../MagicalRecord/Categories/DataImport/NSRelationshipDescription+MagicalDataImport.h>
#import <../MagicalRecord/Categories/DataImport/NSEntityDescription+MagicalDataImport.h>
