#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SerializerTraits; }
// clang-format on

class NBTSchemaWriter {
public:
    // NBTSchemaWriter inner types declare
    // clang-format off
    struct StackNode;
    // clang-format on

    // NBTSchemaWriter inner types define
    struct StackNode {

    public:
        // prevent constructor by default
        StackNode& operator=(StackNode const&) = delete;
        StackNode(StackNode const&)            = delete;
        StackNode()                            = delete;

    public:
        /**
         * @symbol ??1StackNode\@NBTSchemaWriter\@\@QEAA\@XZ
         */
        MCAPI ~StackNode(); // NOLINT
    };

public:
    // prevent constructor by default
    NBTSchemaWriter& operator=(NBTSchemaWriter const&) = delete;
    NBTSchemaWriter(NBTSchemaWriter const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?write\@NBTSchemaWriter\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual bool write(std::string const&, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NMAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual bool write(float, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol
     * ?pushMember\@NBTSchemaWriter\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual bool pushMember(std::string const&, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?popMember\@NBTSchemaWriter\@\@UEAAXXZ
     */
    virtual void popMember(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?openObject\@NBTSchemaWriter\@\@UEAA_NAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual bool openObject(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?openArray\@NBTSchemaWriter\@\@UEAA_N_KAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual bool openArray(unsigned __int64, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?close\@NBTSchemaWriter\@\@UEAAXAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual void close(struct cereal::SerializerTraits const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTSCHEMAWRITER
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_N_KAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(unsigned __int64, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_N_JAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(__int64, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NNAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(double, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_N_NAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(bool, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NCAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(signed char, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NEAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(unsigned char, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NGAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(unsigned short, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NFAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(short, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NIAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(unsigned int, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?write\@NBTSchemaWriter\@\@UEAA_NHAEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI bool write(int, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NBTSchemaWriter(); // NOLINT
#endif
    /**
     * @symbol ??0NBTSchemaWriter\@\@QEAA\@XZ
     */
    MCAPI NBTSchemaWriter(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_serializeTag\@NBTSchemaWriter\@\@AEAA_NV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool _serializeTag(std::unique_ptr<class Tag>); // NOLINT

private:
};
