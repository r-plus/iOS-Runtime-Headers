/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebTextIteratorPrivate : NSObject {
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > { 
        struct __compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > { 
            struct TextIterator {} *__first_; 
        } __ptr_; 
    }  _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16> { 
        unsigned short *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
        unsigned int m_mask; 
    }  _upconvertedText;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
