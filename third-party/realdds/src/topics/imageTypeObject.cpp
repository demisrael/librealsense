// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2022 Intel Corporation. All Rights Reserved.

/*!
 * @file imageTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include <realdds/topics/image/image.h>
#include "imageTypeObject.h"
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registerimageTypes()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("realdds::topics::raw::device::image", realdds::topics::raw::device::GetimageIdentifier(true),
            realdds::topics::raw::device::GetimageObject(true));
    factory->add_type_object("realdds::topics::raw::device::image", realdds::topics::raw::device::GetimageIdentifier(false),
            realdds::topics::raw::device::GetimageObject(false));





}

namespace realdds {
    namespace topics {
        namespace raw {
            namespace device {
                const TypeIdentifier* GetimageIdentifier(bool complete)
                {
                    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("image", complete);
                    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
                    {
                        return c_identifier;
                    }

                    GetimageObject(complete); // Generated inside
                    return TypeObjectFactory::get_instance()->get_type_identifier("image", complete);
                }

                const TypeObject* GetimageObject(bool complete)
                {
                    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("image", complete);
                    if (c_type_object != nullptr)
                    {
                        return c_type_object;
                    }
                    else if (complete)
                    {
                        return GetCompleteimageObject();
                    }
                    //else
                    return GetMinimalimageObject();
                }

                const TypeObject* GetMinimalimageObject()
                {
                    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("image", false);
                    if (c_type_object != nullptr)
                    {
                        return c_type_object;
                    }

                    TypeObject *type_object = new TypeObject();
                    type_object->_d(EK_MINIMAL);
                    type_object->minimal()._d(TK_STRUCTURE);

                    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
                    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
                    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
                    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
                    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

                    MemberId memberId = 0;
                    MinimalStructMember mst_raw_data;
                    mst_raw_data.common().member_id(memberId++);
                    mst_raw_data.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    mst_raw_data.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    mst_raw_data.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    mst_raw_data.common().member_flags().IS_OPTIONAL(false);
                    mst_raw_data.common().member_flags().IS_MUST_UNDERSTAND(false);
                    mst_raw_data.common().member_flags().IS_KEY(false);
                    mst_raw_data.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    mst_raw_data.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 0, false));


                    MD5 raw_data_hash("raw_data");
                    for(int i = 0; i < 4; ++i)
                    {
                        mst_raw_data.detail().name_hash()[i] = raw_data_hash.digest[i];
                    }
                    type_object->minimal().struct_type().member_seq().emplace_back(mst_raw_data);

                    MinimalStructMember mst_size;
                    mst_size.common().member_id(memberId++);
                    mst_size.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    mst_size.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    mst_size.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    mst_size.common().member_flags().IS_OPTIONAL(false);
                    mst_size.common().member_flags().IS_MUST_UNDERSTAND(false);
                    mst_size.common().member_flags().IS_KEY(false);
                    mst_size.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    mst_size.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

                    MD5 size_hash("size");
                    for(int i = 0; i < 4; ++i)
                    {
                        mst_size.detail().name_hash()[i] = size_hash.digest[i];
                    }
                    type_object->minimal().struct_type().member_seq().emplace_back(mst_size);

                    MinimalStructMember mst_width;
                    mst_width.common().member_id(memberId++);
                    mst_width.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    mst_width.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    mst_width.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    mst_width.common().member_flags().IS_OPTIONAL(false);
                    mst_width.common().member_flags().IS_MUST_UNDERSTAND(false);
                    mst_width.common().member_flags().IS_KEY(false);
                    mst_width.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    mst_width.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

                    MD5 width_hash("width");
                    for(int i = 0; i < 4; ++i)
                    {
                        mst_width.detail().name_hash()[i] = width_hash.digest[i];
                    }
                    type_object->minimal().struct_type().member_seq().emplace_back(mst_width);

                    MinimalStructMember mst_height;
                    mst_height.common().member_id(memberId++);
                    mst_height.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    mst_height.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    mst_height.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    mst_height.common().member_flags().IS_OPTIONAL(false);
                    mst_height.common().member_flags().IS_MUST_UNDERSTAND(false);
                    mst_height.common().member_flags().IS_KEY(false);
                    mst_height.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    mst_height.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

                    MD5 height_hash("height");
                    for(int i = 0; i < 4; ++i)
                    {
                        mst_height.detail().name_hash()[i] = height_hash.digest[i];
                    }
                    type_object->minimal().struct_type().member_seq().emplace_back(mst_height);

                    MinimalStructMember mst_format;
                    mst_format.common().member_id(memberId++);
                    mst_format.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    mst_format.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    mst_format.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    mst_format.common().member_flags().IS_OPTIONAL(false);
                    mst_format.common().member_flags().IS_MUST_UNDERSTAND(false);
                    mst_format.common().member_flags().IS_KEY(false);
                    mst_format.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    mst_format.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

                    MD5 format_hash("format");
                    for(int i = 0; i < 4; ++i)
                    {
                        mst_format.detail().name_hash()[i] = format_hash.digest[i];
                    }
                    type_object->minimal().struct_type().member_seq().emplace_back(mst_format);


                    // Header
                    // TODO Inheritance
                    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
                    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

                    TypeIdentifier identifier;
                    identifier._d(EK_MINIMAL);

                    SerializedPayload_t payload(static_cast<uint32_t>(
                        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
                    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                    eprosima::fastcdr::Cdr ser(
                        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                    payload.encapsulation = CDR_LE;

                    type_object->serialize(ser);
                    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                    MD5 objectHash;
                    objectHash.update((char*)payload.data, payload.length);
                    objectHash.finalize();
                    for(int i = 0; i < 14; ++i)
                    {
                        identifier.equivalence_hash()[i] = objectHash.digest[i];
                    }

                    TypeObjectFactory::get_instance()->add_type_object("image", &identifier, type_object);
                    delete type_object;
                    return TypeObjectFactory::get_instance()->get_type_object("image", false);
                }

                const TypeObject* GetCompleteimageObject()
                {
                    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("image", true);
                    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
                    {
                        return c_type_object;
                    }

                    TypeObject *type_object = new TypeObject();
                    type_object->_d(EK_COMPLETE);
                    type_object->complete()._d(TK_STRUCTURE);

                    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
                    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
                    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
                    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
                    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

                    MemberId memberId = 0;
                    CompleteStructMember cst_raw_data;
                    cst_raw_data.common().member_id(memberId++);
                    cst_raw_data.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    cst_raw_data.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    cst_raw_data.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    cst_raw_data.common().member_flags().IS_OPTIONAL(false);
                    cst_raw_data.common().member_flags().IS_MUST_UNDERSTAND(false);
                    cst_raw_data.common().member_flags().IS_KEY(false);
                    cst_raw_data.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    cst_raw_data.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 0, true));


                    cst_raw_data.detail().name("raw_data");

                    type_object->complete().struct_type().member_seq().emplace_back(cst_raw_data);

                    CompleteStructMember cst_size;
                    cst_size.common().member_id(memberId++);
                    cst_size.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    cst_size.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    cst_size.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    cst_size.common().member_flags().IS_OPTIONAL(false);
                    cst_size.common().member_flags().IS_MUST_UNDERSTAND(false);
                    cst_size.common().member_flags().IS_KEY(false);
                    cst_size.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    cst_size.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

                    cst_size.detail().name("size");

                    type_object->complete().struct_type().member_seq().emplace_back(cst_size);

                    CompleteStructMember cst_width;
                    cst_width.common().member_id(memberId++);
                    cst_width.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    cst_width.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    cst_width.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    cst_width.common().member_flags().IS_OPTIONAL(false);
                    cst_width.common().member_flags().IS_MUST_UNDERSTAND(false);
                    cst_width.common().member_flags().IS_KEY(false);
                    cst_width.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    cst_width.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

                    cst_width.detail().name("width");

                    type_object->complete().struct_type().member_seq().emplace_back(cst_width);

                    CompleteStructMember cst_height;
                    cst_height.common().member_id(memberId++);
                    cst_height.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    cst_height.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    cst_height.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    cst_height.common().member_flags().IS_OPTIONAL(false);
                    cst_height.common().member_flags().IS_MUST_UNDERSTAND(false);
                    cst_height.common().member_flags().IS_KEY(false);
                    cst_height.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    cst_height.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

                    cst_height.detail().name("height");

                    type_object->complete().struct_type().member_seq().emplace_back(cst_height);

                    CompleteStructMember cst_format;
                    cst_format.common().member_id(memberId++);
                    cst_format.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                    cst_format.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                    cst_format.common().member_flags().IS_EXTERNAL(false); // Unsupported
                    cst_format.common().member_flags().IS_OPTIONAL(false);
                    cst_format.common().member_flags().IS_MUST_UNDERSTAND(false);
                    cst_format.common().member_flags().IS_KEY(false);
                    cst_format.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                    cst_format.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

                    cst_format.detail().name("format");

                    type_object->complete().struct_type().member_seq().emplace_back(cst_format);


                    // Header
                    type_object->complete().struct_type().header().detail().type_name("image");
                    // TODO inheritance


                    TypeIdentifier identifier;
                    identifier._d(EK_COMPLETE);

                    SerializedPayload_t payload(static_cast<uint32_t>(
                        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
                    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                    eprosima::fastcdr::Cdr ser(
                        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                    payload.encapsulation = CDR_LE;

                    type_object->serialize(ser);
                    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                    MD5 objectHash;
                    objectHash.update((char*)payload.data, payload.length);
                    objectHash.finalize();
                    for(int i = 0; i < 14; ++i)
                    {
                        identifier.equivalence_hash()[i] = objectHash.digest[i];
                    }

                    TypeObjectFactory::get_instance()->add_type_object("image", &identifier, type_object);
                    delete type_object;
                    return TypeObjectFactory::get_instance()->get_type_object("image", true);
                }

            } // namespace device
        } // namespace raw
    } // namespace topics
} // namespace realdds