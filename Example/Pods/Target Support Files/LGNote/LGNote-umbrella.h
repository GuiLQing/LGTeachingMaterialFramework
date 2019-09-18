#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LGNoteBaseModel.h"
#import "LGNoteBaseNavigationViewController.h"
#import "LGNoteBaseTableView.h"
#import "LGNoteBaseTextField.h"
#import "LGNoteBaseTextView.h"
#import "LGNoteBaseViewController.h"
#import "NSBundle+Notes.h"
#import "NSData+Notes.h"
#import "NSString+Notes.h"
#import "NSString+NotesEmoji.h"
#import "UIButton+Notes.h"
#import "UIColor+Notes.h"
#import "UITextView+Notes.h"
#import "UIView+Notes.h"
#import "LGNCutImageViewController.h"
#import "LGNDrawBoardViewController.h"
#import "LGNImagePickerViewController.h"
#import "LGNNewFilterViewController.h"
#import "LGNNoteEditViewController.h"
#import "LGNNoteFilterViewController.h"
#import "LGNNoteMainViewController.h"
#import "LGNNoteSearchViewController.h"
#import "LGNNoteModel.h"
#import "LGNParamModel.h"
#import "LGNSingleTool.h"
#import "LGNSubjectModel.h"
#import "HDAnimatedImageRep.h"
#import "HDImageCache.h"
#import "HDImageCacheConfig.h"
#import "HDWebImageCoder.h"
#import "HDWebImageCoderHelper.h"
#import "HDWebImageCodersManager.h"
#import "HDWebImageCompat.h"
#import "HDWebImageDownloader.h"
#import "HDWebImageDownloaderOperation.h"
#import "HDWebImageFrame.h"
#import "HDWebImageGIFCoder.h"
#import "HDWebImageImageIOCoder.h"
#import "HDWebImageManager.h"
#import "HDWebImageOperation.h"
#import "HDWebImagePrefetcher.h"
#import "HDWebImageTransition.h"
#import "NSButton+WebCache.h"
#import "NSData+ImageContentType.h"
#import "NSImage+WebCache.h"
#import "UIButton+WebCache.h"
#import "UIImage+ForceDecode.h"
#import "UIImage+GIF.h"
#import "UIImage+MemoryCacheCost.h"
#import "UIImage+MultiFormat.h"
#import "UIImageView+HighlightedWebCache.h"
#import "UIImageView+WebCache.h"
#import "UIView+WebCache.h"
#import "UIView+WebCacheOperation.h"
#import "HPTextViewTapGestureRecognizer.h"
#import "LGNConfigure.h"
#import "LGNNoteTools.h"
#import "LGNoteConfigure.h"
#import "LGNoteMBAlert.h"
#import "LGNoteNetworkManager.h"
#import "LGNoteSafeTool.h"
#import "NoteXMLDictionary.h"
#import "YBImageBrowserProgressView.h"
#import "YBImageBrowserSheetView.h"
#import "YBImageBrowserTipView.h"
#import "YBImageBrowserToolBar.h"
#import "YBImageBrowser+Internal.h"
#import "YBImageBrowserView.h"
#import "YBImageBrowserViewLayout.h"
#import "YBIBCopywriter.h"
#import "YBIBFileManager.h"
#import "YBIBGestureInteractionProfile.h"
#import "YBIBLayoutDirectionManager.h"
#import "YBIBPhotoAlbumManager.h"
#import "YBIBTransitionManager.h"
#import "YBIBUtilities.h"
#import "YBIBWebImageManager.h"
#import "YBImage.h"
#import "YBImageBrowseCell.h"
#import "YBImageBrowseCellData+Internal.h"
#import "YBImageBrowseCellData.h"
#import "YBImageBrowserCellDataProtocol.h"
#import "YBImageBrowserCellProtocol.h"
#import "YBImageBrowserDataSource.h"
#import "YBImageBrowserDelegate.h"
#import "YBImageBrowserSheetViewProtocol.h"
#import "YBImageBrowserToolBarProtocol.h"
#import "YBVideoBrowseActionBar.h"
#import "YBVideoBrowseCell.h"
#import "YBVideoBrowseCellData+Internal.h"
#import "YBVideoBrowseCellData.h"
#import "YBVideoBrowseTopBar.h"
#import "YBImageBrowser.h"
#import "LGNImageView.h"
#import "LGNBoardBgCollectionViewCell.h"
#import "LGNBoardBgImageView.h"
#import "LGNDrawBoardModel.h"
#import "LGNNoteDrawSettingButtonView.h"
#import "LGNNoteDrawSettingView.h"
#import "LGNNoteDrawView.h"
#import "LGNPenFontBallView.h"
#import "LGNYYClassInfo.h"
#import "LGNYYModel.h"
#import "NSObject+YYModel.h"
#import "LGNNewSearchToolView.h"
#import "LGNNewSeleteDataView.h"
#import "LGNNoteCustomWindow.h"
#import "LGNNoteEditView.h"
#import "LGNNoteFilterCollectionReusableViewHeader.h"
#import "LGNNoteFilterCollectionViewCell.h"
#import "LGNNoteMainImageTableViewCell.h"
#import "LGNNoteMainTableView.h"
#import "LGNNoteMainTableViewCell.h"
#import "LGNNoteMoreImageTableViewCell.h"
#import "LGNNoteSourceDetailView.h"
#import "LGNSearchToolView.h"
#import "LGNSearchToolViewConfigure.h"
#import "LGNSubjectPickerView.h"
#import "LGNViewModel.h"

FOUNDATION_EXPORT double LGNoteVersionNumber;
FOUNDATION_EXPORT const unsigned char LGNoteVersionString[];

