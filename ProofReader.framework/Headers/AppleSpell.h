/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/AppleSpell.h>


@class NSMutableDictionary, NSData, NSString, NSArray, NSMutableArray, NSMutableSet;

@interface AppleSpell : NSObject {
	void *_proofReaderConnection;	// 4 = 0x4
	CFDictionaryRef _databaseConnections;	// 8 = 0x8
	NSMutableDictionary *_bindicts;	// 12 = 0xc
	NSData *_globalBindictData;	// 16 = 0x10
	NSData *_globalNegBindictData;	// 20 = 0x14
	NSMutableDictionary *_autocorrections;	// 24 = 0x18
	NSString *_lastLanguage;	// 28 = 0x1c
	NSArray *_userPreferredLanguages;	// 32 = 0x20
	NSMutableDictionary *_learnedResponses;	// 36 = 0x24
	NSMutableArray *_diagnosticInfo;	// 40 = 0x28
	NSMutableSet *_foundNames;	// 44 = 0x2c
	double _lastFindNames;	// 48 = 0x30
}
@property(readonly, retain) NSData *globalBindictData;	// G=0xbe4d; converted property
- (void)timeout:(id)timeout;	// 0x13a3d
- (void)resetTimer;	// 0x23d9
- (id)init;	// 0x1261
- (id)bundle;	// 0x3d4d
- (id)localizationsForLanguage:(id)language;	// 0x14b05
- (id)localizationForLanguage:(id)language;	// 0x3301
- (id)fallbackLocalizationForLanguage:(id)language;	// 0x14909
- (unsigned long)encodingForLanguage:(id)language;	// 0x3505
- (PR_DB_IO *)databaseConnectionForLanguage:(id)language;	// 0x3599
- (id)bindictDataForLanguage:(id)language index:(unsigned)index;	// 0x9efd
// converted property getter: - (id)globalBindictData;	// 0xbe4d
- (id)globalNegativeBindictData;	// 0x1486d
- (id)autocorrectionDictionaryForLanguage:(id)language;	// 0x14715
- (BOOL)checkWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding index:(unsigned)index;	// 0xb8d1
- (BOOL)globalCheckWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0xbd7d
- (BOOL)globalCheckNegativeWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x145b5
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0xbee9
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding connection:(PR_DB_IO *)connection sender:(id)sender;	// 0xb65d
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender checkBase:(BOOL)base checkDict:(BOOL)dict checkNames:(BOOL)names checkHyphens:(BOOL)hyphens checkIntercaps:(BOOL)intercaps checkOptions:(BOOL)options depth:(unsigned)depth;	// 0xa399
- (BOOL)_checkGrammarInString:(id)string range:(NSRange)range language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io errorRange:(NSRange *)range7 details:(id *)details;	// 0x14385
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string range:(NSRange)range language:(id)language orthography:(id)orthography mutableResults:(id)results offset:(unsigned)offset details:(id *)details;	// 0x14141
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string language:(id)language details:(id *)details;	// 0x140dd
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string range:(NSRange)range languages:(id)languages orthography:(id)orthography checkOrthography:(BOOL)orthography6 mutableResults:(id)results offset:(unsigned)offset autocorrect:(BOOL)autocorrect keyEventData:(id)data wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x2519
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only;	// 0x13fb5
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x23dd
- (id)spellServer:(id)server checkString:(id)string offset:(unsigned)offset types:(unsigned long long)types options:(id)options orthography:(id)orthography wordCount:(int *)count;	// 0x13ea1
- (id)spellServer:(id)server suggestGuessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x13e5d
- (id)spellServer:(id)server suggestCompletionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;	// 0x13e19
- (id)spellServer:(id)server suggestWordWithLengthInRange:(NSRange)range language:(id)language;	// 0x13ded
- (id)spellServer:(id)server stringForInputString:(id)inputString language:(id)language;	// 0x13a51
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x13a41
@end

@interface AppleSpell (EnglishGrammar)
- (BOOL)looksLikeArticledNoun:(id)noun language:(id)language connection:(PR_DB_IO *)connection;	// 0x66ec1
- (BOOL)looksLikeAdverb:(id)adverb language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x66f5d
- (BOOL)looksLikeParticiple:(id)participle language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x67119
- (BOOL)onContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x66be9
- (BOOL)onNoContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x66dd5
- (id)_crudeNextWordInString:(id)string inRange:(NSRange)range;	// 0x67335
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range precededBy:(id *)by;	// 0x6742d
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range;	// 0x66e05
- (id)_modifiedGrammarDescriptionForDescription:(id)description;	// 0x67581
- (id)_correctionForSuggestedPhrase:(const char *)suggestedPhrase originalBuffer:(const char *)buffer length:(unsigned)length;	// 0x677b5
- (id)_detailWithRange:(NSRange)range description:(id)description corrections:(id)corrections;	// 0x66e29
- (BOOL)_checkEnglishGrammarInString:(id)string range:(NSRange)range indexIntoBuffer:(unsigned)buffer bufferLength:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io retval:(int *)retval errorRange:(NSRange *)range10 details:(id *)details;	// 0x6796d
@end

@interface AppleSpell (Guessing)
- (id)_japaneseCorrectionForString:(id)string connection:(PR_DB_IO *)connection;	// 0x6a925
- (id)_correctionForString:(id)string range:(NSRange)range inString:(id)string3 auxiliary:(id)auxiliary dictionary:(id)dictionary language:(id)language connection:(PR_DB_IO *)connection keyEventData:(id)data;	// 0x6da65
- (id)spellServer:(id)server suggestGuessesForWord:(id)word inLanguage:(id)language;	// 0x6ad65
- (id)spellServer:(id)server suggestCompletionsForPartialWord:(id)partialWord inLanguage:(id)language;	// 0x6aaa1
- (id)spellServer:(id)server suggestWordWithMinimumLength:(unsigned)minimumLength maximumLength:(unsigned)length language:(id)language;	// 0x6fa95
@end

@interface AppleSpell (Chinese)
- (void)addModifiedPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score lastSyllableScore:(unsigned)score9;	// 0x706bd
- (id)spellServer:(id)server _retainedAlternativesForPinyinInputString:(id)pinyinInputString;	// 0x70d45
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString;	// 0x702ad
@end
