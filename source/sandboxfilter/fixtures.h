#ifndef FIXTURES_H_
#define FIXTURES_H_

#ifdef VLC_4
#define set_callbacks( activate, deactivate ) \
    if (vlc_module_set(VLC_MODULE_CB_OPEN, #activate, (void *)(activate)) \
     || vlc_module_set(VLC_MODULE_CB_CLOSE, #deactivate, \
                       (void *)(deactivate))) \
        goto error;
#endif

#endif // FIXTURES_H_
