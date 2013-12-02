;------------------------------------------------------------------------------
; Makefile for ThinkShout client website.
;------------------------------------------------------------------------------

api = 2
core = 7.x

;-----------------------------------------
; Contrib Modules
;-----------------------------------------

; addressfield
projects[addressfield][version] = "1.0-beta4"
projects[addressfield][subdir] = "contrib"

; admin_menu requires bean
projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

; bean requires ctools, entity
projects[bean][version] = "1.6"
projects[bean][subdir] = "contrib"

; better_exposed_filters
projects[better_exposed_filters][version] = "3.0-beta3"
projects[better_exposed_filters][subdir] = "contrib"

; context requires ctools 1.7+ (jquery_ui & admin recommended)
projects[context][version] = "3.1"
projects[context][subdir] = "contrib"

; ctools
projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

; entity
projects[entity][version] = "1.2"
projects[entity][subdir] = "contrib"

; date
projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

; entityreference
projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

; features
projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

; field_collection
projects[field_collection][version] = "1.0-beta5"
projects[field_collection][subdir] = "contrib"

; geocoder
projects[geocoder][version] = "1.2"
projects[geocoder][subdir] = "contrib"

; geofield
projects[geofield][version] = "2.1"
projects[geofield][subdir] = "contrib"

; geophp
projects[geophp][version] = "1.7"
projects[geophp][subdir] = "contrib"

; leaflet
projects[leaflet][subdir] = "contrib"
projects[leaflet][download][type] = git
projects[leaflet][download][branch] = "7.x-1.x"
projects[leaflet][download][revision] = "3374eca"

; libraries
projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

; link
projects[link][version] = "1.2"
projects[link][subdir] = "contrib"

; mandrill
projects[mandrill][version] = "1.5"
projects[mandrill][subdir] = "contrib"

; mailsystem
projects[mailsystem][version] = "2.34"
projects[mailsystem][subdir] = "contrib"

; pathauto requires token
projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

; publishcontent
projects[publishcontent][version] = "1.2"
projects[publishcontent][subdir] = "contrib"

; strongarm requires ctools
projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

; token
projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

; views
projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

; wysiwyg
projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

;-----------------------------------------
; Patched Contrib Modules
;-----------------------------------------

; Patch to fix notices for render arrays in blocks/panels: http://drupal.org/node/1925018#comment-7361230
;projects[ctools][patch][] = "http://drupal.org/files/ctools-1925018-61.patch"


;-----------------------------------------
; Developer tools
;-----------------------------------------

; devel
;projects[devel][version] = ""
projects[devel][subdir] = "developer"

; diff
;projects[diff][version] = ""
projects[diff][subdir] = "developer"

; ftools
;projects[ftools][version] = ""
projects[ftools][subdir] = "developer"

;-----------------------------------------
; Libraries
;-----------------------------------------

; ts_install_helpers
;libraries[ts_install_helpers][download][type] = git
;libraries[ts_install_helpers][download][url] = git@github.com:thinkshout/ts_install_helpers.git
;libraries[ts_install_helpers][directory_name] = "ts_install_helpers"
;libraries[ts_install_helpers][type] = "library"


; chosen
libraries[chosen][download][type] = git
libraries[chosen][download][url] = https://github.com/harvesthq/chosen.git
libraries[chosen][directory_name] = "chosen"
libraries[chosen][type] = "library"
;libraries[chosen][revision] = "333899ca51"

; Leaflet
libraries[leaflet][download][type] = "get"
libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.zip"
libraries[leaflet][directory_name] = "leaflet"
libraries[leaflet][destination] = "libraries"
