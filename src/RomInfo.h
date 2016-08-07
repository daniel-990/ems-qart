#ifndef _ROM_INFO_H
#define _ROM_INFO_H

#include <QObject>

class RomInfo : public QObject
{
    Q_OBJECT

    public:
        enum RomHeaderOffsets {
            LogoOffset = 0x104,
            TitleOffset = 0x134,
            CGBFlagOffset = 0x143,
            SGBFlagOffset = 0x146,
            ROMSizeOffset = 0x148,
            SRAMSizeOffset = 0x149,
            RegionOffset = 0x14a,
            OldLicenseOffset = 0x14b,
            RomVersionOffset = 0x14c,
            ChecksumOffset = 0x14d
        };
        Q_ENUM(RomHeaderOffsets)

        RomInfo(QObject *parent = nullptr);

        virtual ~RomInfo();
};

#endif