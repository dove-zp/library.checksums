/**
 * \brief crc - compessed into single header - compressed export
 * \author dove-zp
 * \contact https://github.com/dove-zp
 * \version 12/AUG/2018
 * \license GNU General Public License 3.0 or later
 */

#pragma once

//--------------------------------------------------------------------------------------------------

/**
 * \brief crc.tables - crc tables
 * \author dove-zp
 * \contact https://github.com/dove-zp
 * \version 31/JULY/2018
 * \license GNU General Public License 3.0 or later
 */

//--------------------------------------------------------------------------------------------------

namespace hash
{
    namespace crc
    {
        namespace tables
        {
            constexpr unsigned __int8 crc_8[] =
            {
                0x00, 0x07, 0x0E, 0x09, 0x1C, 0x1B, 0x12,
                0x15, 0x38, 0x3F, 0x36, 0x31, 0x24, 0x23,
                0x2A, 0x2D, 0x70, 0x77, 0x7E, 0x79, 0x6C,
                0x6B, 0x62, 0x65, 0x48, 0x4F, 0x46, 0x41,
                0x54, 0x53, 0x5A, 0x5D, 0xE0, 0xE7, 0xEE,
                0xE9, 0xFC, 0xFB, 0xF2, 0xF5, 0xD8, 0xDF,
                0xD6, 0xD1, 0xC4, 0xC3, 0xCA, 0xCD, 0x90,
                0x97, 0x9E, 0x99, 0x8C, 0x8B, 0x82, 0x85,
                0xA8, 0xAF, 0xA6, 0xA1, 0xB4, 0xB3, 0xBA,
                0xBD, 0xC7, 0xC0, 0xC9, 0xCE, 0xDB, 0xDC,
                0xD5, 0xD2, 0xFF, 0xF8, 0xF1, 0xF6, 0xE3,
                0xE4, 0xED, 0xEA, 0xB7, 0xB0, 0xB9, 0xBE,
                0xAB, 0xAC, 0xA5, 0xA2, 0x8F, 0x88, 0x81,
                0x86, 0x93, 0x94, 0x9D, 0x9A, 0x27, 0x20,
                0x29, 0x2E, 0x3B, 0x3C, 0x35, 0x32, 0x1F,
                0x18, 0x11, 0x16, 0x03, 0x04, 0x0D, 0x0A,
                0x57, 0x50, 0x59, 0x5E, 0x4B, 0x4C, 0x45,
                0x42, 0x6F, 0x68, 0x61, 0x66, 0x73, 0x74,
                0x7D, 0x7A, 0x89, 0x8E, 0x87, 0x80, 0x95,
                0x92, 0x9B, 0x9C, 0xB1, 0xB6, 0xBF, 0xB8,
                0xAD, 0xAA, 0xA3, 0xA4, 0xF9, 0xFE, 0xF7,
                0xF0, 0xE5, 0xE2, 0xEB, 0xEC, 0xC1, 0xC6,
                0xCF, 0xC8, 0xDD, 0xDA, 0xD3, 0xD4, 0x69,
                0x6E, 0x67, 0x60, 0x75, 0x72, 0x7B, 0x7C,
                0x51, 0x56, 0x5F, 0x58, 0x4D, 0x4A, 0x43,
                0x44, 0x19, 0x1E, 0x17, 0x10, 0x05, 0x02,
                0x0B, 0x0C, 0x21, 0x26, 0x2F, 0x28, 0x3D,
                0x3A, 0x33, 0x34, 0x4E, 0x49, 0x40, 0x47,
                0x52, 0x55, 0x5C, 0x5B, 0x76, 0x71, 0x78,
                0x7F, 0x6A, 0x6D, 0x64, 0x63, 0x3E, 0x39,
                0x30, 0x37, 0x22, 0x25, 0x2C, 0x2B, 0x06,
                0x01, 0x08, 0x0F, 0x1A, 0x1D, 0x14, 0x13,
                0xAE, 0xA9, 0xA0, 0xA7, 0xB2, 0xB5, 0xBC,
                0xBB, 0x96, 0x91, 0x98, 0x9F, 0x8A, 0x8D,
                0x84, 0x83, 0xDE, 0xD9, 0xD0, 0xD7, 0xC2,
                0xC5, 0xCC, 0xCB, 0xE6, 0xE1, 0xE8, 0xEF,
                0xFA, 0xFD, 0xF4, 0xF3
            };

            constexpr unsigned __int16 crc_16[] =
            {
                0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50A5, 0x60C6, 0x70E7,
                0x8108, 0x9129, 0xA14A, 0xB16B, 0xC18C, 0xD1AD, 0xE1CE, 0xF1EF,
                0x1231, 0x0210, 0x3273, 0x2252, 0x52B5, 0x4294, 0x72F7, 0x62D6,
                0x9339, 0x8318, 0xB37B, 0xA35A, 0xD3BD, 0xC39C, 0xF3FF, 0xE3DE,
                0x2462, 0x3443, 0x0420, 0x1401, 0x64E6, 0x74C7, 0x44A4, 0x5485,
                0xA56A, 0xB54B, 0x8528, 0x9509, 0xE5EE, 0xF5CF, 0xC5AC, 0xD58D,
                0x3653, 0x2672, 0x1611, 0x0630, 0x76D7, 0x66F6, 0x5695, 0x46B4,
                0xB75B, 0xA77A, 0x9719, 0x8738, 0xF7DF, 0xE7FE, 0xD79D, 0xC7BC,
                0x48C4, 0x58E5, 0x6886, 0x78A7, 0x0840, 0x1861, 0x2802, 0x3823,
                0xC9CC, 0xD9ED, 0xE98E, 0xF9AF, 0x8948, 0x9969, 0xA90A, 0xB92B,
                0x5AF5, 0x4AD4, 0x7AB7, 0x6A96, 0x1A71, 0x0A50, 0x3A33, 0x2A12,
                0xDBFD, 0xCBDC, 0xFBBF, 0xEB9E, 0x9B79, 0x8B58, 0xBB3B, 0xAB1A,
                0x6CA6, 0x7C87, 0x4CE4, 0x5CC5, 0x2C22, 0x3C03, 0x0C60, 0x1C41,
                0xEDAE, 0xFD8F, 0xCDEC, 0xDDCD, 0xAD2A, 0xBD0B, 0x8D68, 0x9D49,
                0x7E97, 0x6EB6, 0x5ED5, 0x4EF4, 0x3E13, 0x2E32, 0x1E51, 0x0E70,
                0xFF9F, 0xEFBE, 0xDFDD, 0xCFFC, 0xBF1B, 0xAF3A, 0x9F59, 0x8F78,
                0x9188, 0x81A9, 0xB1CA, 0xA1EB, 0xD10C, 0xC12D, 0xF14E, 0xE16F,
                0x1080, 0x00A1, 0x30C2, 0x20E3, 0x5004, 0x4025, 0x7046, 0x6067,
                0x83B9, 0x9398, 0xA3FB, 0xB3DA, 0xC33D, 0xD31C, 0xE37F, 0xF35E,
                0x02B1, 0x1290, 0x22F3, 0x32D2, 0x4235, 0x5214, 0x6277, 0x7256,
                0xB5EA, 0xA5CB, 0x95A8, 0x8589, 0xF56E, 0xE54F, 0xD52C, 0xC50D,
                0x34E2, 0x24C3, 0x14A0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405,
                0xA7DB, 0xB7FA, 0x8799, 0x97B8, 0xE75F, 0xF77E, 0xC71D, 0xD73C,
                0x26D3, 0x36F2, 0x0691, 0x16B0, 0x6657, 0x7676, 0x4615, 0x5634,
                0xD94C, 0xC96D, 0xF90E, 0xE92F, 0x99C8, 0x89E9, 0xB98A, 0xA9AB,
                0x5844, 0x4865, 0x7806, 0x6827, 0x18C0, 0x08E1, 0x3882, 0x28A3,
                0xCB7D, 0xDB5C, 0xEB3F, 0xFB1E, 0x8BF9, 0x9BD8, 0xABBB, 0xBB9A,
                0x4A75, 0x5A54, 0x6A37, 0x7A16, 0x0AF1, 0x1AD0, 0x2AB3, 0x3A92,
                0xFD2E, 0xED0F, 0xDD6C, 0xCD4D, 0xBDAA, 0xAD8B, 0x9DE8, 0x8DC9,
                0x7C26, 0x6C07, 0x5C64, 0x4C45, 0x3CA2, 0x2C83, 0x1CE0, 0x0CC1,
                0xEF1F, 0xFF3E, 0xCF5D, 0xDF7C, 0xAF9B, 0xBFBA, 0x8FD9, 0x9FF8,
                0x6E17, 0x7E36, 0x4E55, 0x5E74, 0x2E93, 0x3EB2, 0x0ED1, 0x1EF0

            };

            constexpr unsigned __int32 crc_32[] =
            {
                0x00000000, 0x77073096, 0xEE0E612C, 0x990951BA,
                0x076DC419, 0x706AF48F, 0xE963A535, 0x9E6495A3,
                0x0EDB8832, 0x79DCB8A4, 0xE0D5E91E, 0x97D2D988,
                0x09B64C2B, 0x7EB17CBD, 0xE7B82D07, 0x90BF1D91,
                0x1DB71064, 0x6AB020F2, 0xF3B97148, 0x84BE41DE,
                0x1ADAD47D, 0x6DDDE4EB, 0xF4D4B551, 0x83D385C7,
                0x136C9856, 0x646BA8C0, 0xFD62F97A, 0x8A65C9EC,
                0x14015C4F, 0x63066CD9, 0xFA0F3D63, 0x8D080DF5,
                0x3B6E20C8, 0x4C69105E, 0xD56041E4, 0xA2677172,
                0x3C03E4D1, 0x4B04D447, 0xD20D85FD, 0xA50AB56B,
                0x35B5A8FA, 0x42B2986C, 0xDBBBC9D6, 0xACBCF940,
                0x32D86CE3, 0x45DF5C75, 0xDCD60DCF, 0xABD13D59,
                0x26D930AC, 0x51DE003A, 0xC8D75180, 0xBFD06116,
                0x21B4F4B5, 0x56B3C423, 0xCFBA9599, 0xB8BDA50F,
                0x2802B89E, 0x5F058808, 0xC60CD9B2, 0xB10BE924,
                0x2F6F7C87, 0x58684C11, 0xC1611DAB, 0xB6662D3D,
                0x76DC4190, 0x01DB7106, 0x98D220BC, 0xEFD5102A,
                0x71B18589, 0x06B6B51F, 0x9FBFE4A5, 0xE8B8D433,
                0x7807C9A2, 0x0F00F934, 0x9609A88E, 0xE10E9818,
                0x7F6A0DBB, 0x086D3D2D, 0x91646C97, 0xE6635C01,
                0x6B6B51F4, 0x1C6C6162, 0x856530D8, 0xF262004E,
                0x6C0695ED, 0x1B01A57B, 0x8208F4C1, 0xF50FC457,
                0x65B0D9C6, 0x12B7E950, 0x8BBEB8EA, 0xFCB9887C,
                0x62DD1DDF, 0x15DA2D49, 0x8CD37CF3, 0xFBD44C65,
                0x4DB26158, 0x3AB551CE, 0xA3BC0074, 0xD4BB30E2,
                0x4ADFA541, 0x3DD895D7, 0xA4D1C46D, 0xD3D6F4FB,
                0x4369E96A, 0x346ED9FC, 0xAD678846, 0xDA60B8D0,
                0x44042D73, 0x33031DE5, 0xAA0A4C5F, 0xDD0D7CC9,
                0x5005713C, 0x270241AA, 0xBE0B1010, 0xC90C2086,
                0x5768B525, 0x206F85B3, 0xB966D409, 0xCE61E49F,
                0x5EDEF90E, 0x29D9C998, 0xB0D09822, 0xC7D7A8B4,
                0x59B33D17, 0x2EB40D81, 0xB7BD5C3B, 0xC0BA6CAD,
                0xEDB88320, 0x9ABFB3B6, 0x03B6E20C, 0x74B1D29A,
                0xEAD54739, 0x9DD277AF, 0x04DB2615, 0x73DC1683,
                0xE3630B12, 0x94643B84, 0x0D6D6A3E, 0x7A6A5AA8,
                0xE40ECF0B, 0x9309FF9D, 0x0A00AE27, 0x7D079EB1,
                0xF00F9344, 0x8708A3D2, 0x1E01F268, 0x6906C2FE,
                0xF762575D, 0x806567CB, 0x196C3671, 0x6E6B06E7,
                0xFED41B76, 0x89D32BE0, 0x10DA7A5A, 0x67DD4ACC,
                0xF9B9DF6F, 0x8EBEEFF9, 0x17B7BE43, 0x60B08ED5,
                0xD6D6A3E8, 0xA1D1937E, 0x38D8C2C4, 0x4FDFF252,
                0xD1BB67F1, 0xA6BC5767, 0x3FB506DD, 0x48B2364B,
                0xD80D2BDA, 0xAF0A1B4C, 0x36034AF6, 0x41047A60,
                0xDF60EFC3, 0xA867DF55, 0x316E8EEF, 0x4669BE79,
                0xCB61B38C, 0xBC66831A, 0x256FD2A0, 0x5268E236,
                0xCC0C7795, 0xBB0B4703, 0x220216B9, 0x5505262F,
                0xC5BA3BBE, 0xB2BD0B28, 0x2BB45A92, 0x5CB36A04,
                0xC2D7FFA7, 0xB5D0CF31, 0x2CD99E8B, 0x5BDEAE1D,
                0x9B64C2B0, 0xEC63F226, 0x756AA39C, 0x026D930A,
                0x9C0906A9, 0xEB0E363F, 0x72076785, 0x05005713,
                0x95BF4A82, 0xE2B87A14, 0x7BB12BAE, 0x0CB61B38,
                0x92D28E9B, 0xE5D5BE0D, 0x7CDCEFB7, 0x0BDBDF21,
                0x86D3D2D4, 0xF1D4E242, 0x68DDB3F8, 0x1FDA836E,
                0x81BE16CD, 0xF6B9265B, 0x6FB077E1, 0x18B74777,
                0x88085AE6, 0xFF0F6A70, 0x66063BCA, 0x11010B5C,
                0x8F659EFF, 0xF862AE69, 0x616BFFD3, 0x166CCF45,
                0xA00AE278, 0xD70DD2EE, 0x4E048354, 0x3903B3C2,
                0xA7672661, 0xD06016F7, 0x4969474D, 0x3E6E77DB,
                0xAED16A4A, 0xD9D65ADC, 0x40DF0B66, 0x37D83BF0,
                0xA9BCAE53, 0xDEBB9EC5, 0x47B2CF7F, 0x30B5FFE9,
                0xBDBDF21C, 0xCABAC28A, 0x53B39330, 0x24B4A3A6,
                0xBAD03605, 0xCDD70693, 0x54DE5729, 0x23D967BF,
                0xB3667A2E, 0xC4614AB8, 0x5D681B02, 0x2A6F2B94,
                0xB40BBE37, 0xC30C8EA1, 0x5A05DF1B, 0x2D02EF8D
            };

            constexpr unsigned __int64 crc_64[] =
            {
                0x0000000000000000ULL, 0x7ad870c830358979ULL,
                0xf5b0e190606b12f2ULL, 0x8f689158505e9b8bULL,
                0xc038e5739841b68fULL, 0xbae095bba8743ff6ULL,
                0x358804e3f82aa47dULL, 0x4f50742bc81f2d04ULL,
                0xab28ecb46814fe75ULL, 0xd1f09c7c5821770cULL,
                0x5e980d24087fec87ULL, 0x24407dec384a65feULL,
                0x6b1009c7f05548faULL, 0x11c8790fc060c183ULL,
                0x9ea0e857903e5a08ULL, 0xe478989fa00bd371ULL,
                0x7d08ff3b88be6f81ULL, 0x07d08ff3b88be6f8ULL,
                0x88b81eabe8d57d73ULL, 0xf2606e63d8e0f40aULL,
                0xbd301a4810ffd90eULL, 0xc7e86a8020ca5077ULL,
                0x4880fbd87094cbfcULL, 0x32588b1040a14285ULL,
                0xd620138fe0aa91f4ULL, 0xacf86347d09f188dULL,
                0x2390f21f80c18306ULL, 0x594882d7b0f40a7fULL,
                0x1618f6fc78eb277bULL, 0x6cc0863448deae02ULL,
                0xe3a8176c18803589ULL, 0x997067a428b5bcf0ULL,
                0xfa11fe77117cdf02ULL, 0x80c98ebf2149567bULL,
                0x0fa11fe77117cdf0ULL, 0x75796f2f41224489ULL,
                0x3a291b04893d698dULL, 0x40f16bccb908e0f4ULL,
                0xcf99fa94e9567b7fULL, 0xb5418a5cd963f206ULL,
                0x513912c379682177ULL, 0x2be1620b495da80eULL,
                0xa489f35319033385ULL, 0xde51839b2936bafcULL,
                0x9101f7b0e12997f8ULL, 0xebd98778d11c1e81ULL,
                0x64b116208142850aULL, 0x1e6966e8b1770c73ULL,
                0x8719014c99c2b083ULL, 0xfdc17184a9f739faULL,
                0x72a9e0dcf9a9a271ULL, 0x08719014c99c2b08ULL,
                0x4721e43f0183060cULL, 0x3df994f731b68f75ULL,
                0xb29105af61e814feULL, 0xc849756751dd9d87ULL,
                0x2c31edf8f1d64ef6ULL, 0x56e99d30c1e3c78fULL,
                0xd9810c6891bd5c04ULL, 0xa3597ca0a188d57dULL,
                0xec09088b6997f879ULL, 0x96d1784359a27100ULL,
                0x19b9e91b09fcea8bULL, 0x636199d339c963f2ULL,
                0xdf7adabd7a6e2d6fULL, 0xa5a2aa754a5ba416ULL,
                0x2aca3b2d1a053f9dULL, 0x50124be52a30b6e4ULL,
                0x1f423fcee22f9be0ULL, 0x659a4f06d21a1299ULL,
                0xeaf2de5e82448912ULL, 0x902aae96b271006bULL,
                0x74523609127ad31aULL, 0x0e8a46c1224f5a63ULL,
                0x81e2d7997211c1e8ULL, 0xfb3aa75142244891ULL,
                0xb46ad37a8a3b6595ULL, 0xceb2a3b2ba0eececULL,
                0x41da32eaea507767ULL, 0x3b024222da65fe1eULL,
                0xa2722586f2d042eeULL, 0xd8aa554ec2e5cb97ULL,
                0x57c2c41692bb501cULL, 0x2d1ab4dea28ed965ULL,
                0x624ac0f56a91f461ULL, 0x1892b03d5aa47d18ULL,
                0x97fa21650afae693ULL, 0xed2251ad3acf6feaULL,
                0x095ac9329ac4bc9bULL, 0x7382b9faaaf135e2ULL,
                0xfcea28a2faafae69ULL, 0x8632586aca9a2710ULL,
                0xc9622c4102850a14ULL, 0xb3ba5c8932b0836dULL,
                0x3cd2cdd162ee18e6ULL, 0x460abd1952db919fULL,
                0x256b24ca6b12f26dULL, 0x5fb354025b277b14ULL,
                0xd0dbc55a0b79e09fULL, 0xaa03b5923b4c69e6ULL,
                0xe553c1b9f35344e2ULL, 0x9f8bb171c366cd9bULL,
                0x10e3202993385610ULL, 0x6a3b50e1a30ddf69ULL,
                0x8e43c87e03060c18ULL, 0xf49bb8b633338561ULL,
                0x7bf329ee636d1eeaULL, 0x012b592653589793ULL,
                0x4e7b2d0d9b47ba97ULL, 0x34a35dc5ab7233eeULL,
                0xbbcbcc9dfb2ca865ULL, 0xc113bc55cb19211cULL,
                0x5863dbf1e3ac9decULL, 0x22bbab39d3991495ULL,
                0xadd33a6183c78f1eULL, 0xd70b4aa9b3f20667ULL,
                0x985b3e827bed2b63ULL, 0xe2834e4a4bd8a21aULL,
                0x6debdf121b863991ULL, 0x1733afda2bb3b0e8ULL,
                0xf34b37458bb86399ULL, 0x8993478dbb8deae0ULL,
                0x06fbd6d5ebd3716bULL, 0x7c23a61ddbe6f812ULL,
                0x3373d23613f9d516ULL, 0x49aba2fe23cc5c6fULL,
                0xc6c333a67392c7e4ULL, 0xbc1b436e43a74e9dULL,
                0x95ac9329ac4bc9b5ULL, 0xef74e3e19c7e40ccULL,
                0x601c72b9cc20db47ULL, 0x1ac40271fc15523eULL,
                0x5594765a340a7f3aULL, 0x2f4c0692043ff643ULL,
                0xa02497ca54616dc8ULL, 0xdafce7026454e4b1ULL,
                0x3e847f9dc45f37c0ULL, 0x445c0f55f46abeb9ULL,
                0xcb349e0da4342532ULL, 0xb1eceec59401ac4bULL,
                0xfebc9aee5c1e814fULL, 0x8464ea266c2b0836ULL,
                0x0b0c7b7e3c7593bdULL, 0x71d40bb60c401ac4ULL,
                0xe8a46c1224f5a634ULL, 0x927c1cda14c02f4dULL,
                0x1d148d82449eb4c6ULL, 0x67ccfd4a74ab3dbfULL,
                0x289c8961bcb410bbULL, 0x5244f9a98c8199c2ULL,
                0xdd2c68f1dcdf0249ULL, 0xa7f41839ecea8b30ULL,
                0x438c80a64ce15841ULL, 0x3954f06e7cd4d138ULL,
                0xb63c61362c8a4ab3ULL, 0xcce411fe1cbfc3caULL,
                0x83b465d5d4a0eeceULL, 0xf96c151de49567b7ULL,
                0x76048445b4cbfc3cULL, 0x0cdcf48d84fe7545ULL,
                0x6fbd6d5ebd3716b7ULL, 0x15651d968d029fceULL,
                0x9a0d8ccedd5c0445ULL, 0xe0d5fc06ed698d3cULL,
                0xaf85882d2576a038ULL, 0xd55df8e515432941ULL,
                0x5a3569bd451db2caULL, 0x20ed197575283bb3ULL,
                0xc49581ead523e8c2ULL, 0xbe4df122e51661bbULL,
                0x3125607ab548fa30ULL, 0x4bfd10b2857d7349ULL,
                0x04ad64994d625e4dULL, 0x7e7514517d57d734ULL,
                0xf11d85092d094cbfULL, 0x8bc5f5c11d3cc5c6ULL,
                0x12b5926535897936ULL, 0x686de2ad05bcf04fULL,
                0xe70573f555e26bc4ULL, 0x9ddd033d65d7e2bdULL,
                0xd28d7716adc8cfb9ULL, 0xa85507de9dfd46c0ULL,
                0x273d9686cda3dd4bULL, 0x5de5e64efd965432ULL,
                0xb99d7ed15d9d8743ULL, 0xc3450e196da80e3aULL,
                0x4c2d9f413df695b1ULL, 0x36f5ef890dc31cc8ULL,
                0x79a59ba2c5dc31ccULL, 0x037deb6af5e9b8b5ULL,
                0x8c157a32a5b7233eULL, 0xf6cd0afa9582aa47ULL,
                0x4ad64994d625e4daULL, 0x300e395ce6106da3ULL,
                0xbf66a804b64ef628ULL, 0xc5bed8cc867b7f51ULL,
                0x8aeeace74e645255ULL, 0xf036dc2f7e51db2cULL,
                0x7f5e4d772e0f40a7ULL, 0x05863dbf1e3ac9deULL,
                0xe1fea520be311aafULL, 0x9b26d5e88e0493d6ULL,
                0x144e44b0de5a085dULL, 0x6e963478ee6f8124ULL,
                0x21c640532670ac20ULL, 0x5b1e309b16452559ULL,
                0xd476a1c3461bbed2ULL, 0xaeaed10b762e37abULL,
                0x37deb6af5e9b8b5bULL, 0x4d06c6676eae0222ULL,
                0xc26e573f3ef099a9ULL, 0xb8b627f70ec510d0ULL,
                0xf7e653dcc6da3dd4ULL, 0x8d3e2314f6efb4adULL,
                0x0256b24ca6b12f26ULL, 0x788ec2849684a65fULL,
                0x9cf65a1b368f752eULL, 0xe62e2ad306bafc57ULL,
                0x6946bb8b56e467dcULL, 0x139ecb4366d1eea5ULL,
                0x5ccebf68aecec3a1ULL, 0x2616cfa09efb4ad8ULL,
                0xa97e5ef8cea5d153ULL, 0xd3a62e30fe90582aULL,
                0xb0c7b7e3c7593bd8ULL, 0xca1fc72bf76cb2a1ULL,
                0x45775673a732292aULL, 0x3faf26bb9707a053ULL,
                0x70ff52905f188d57ULL, 0x0a2722586f2d042eULL,
                0x854fb3003f739fa5ULL, 0xff97c3c80f4616dcULL,
                0x1bef5b57af4dc5adULL, 0x61372b9f9f784cd4ULL,
                0xee5fbac7cf26d75fULL, 0x9487ca0fff135e26ULL,
                0xdbd7be24370c7322ULL, 0xa10fceec0739fa5bULL,
                0x2e675fb4576761d0ULL, 0x54bf2f7c6752e8a9ULL,
                0xcdcf48d84fe75459ULL, 0xb71738107fd2dd20ULL,
                0x387fa9482f8c46abULL, 0x42a7d9801fb9cfd2ULL,
                0x0df7adabd7a6e2d6ULL, 0x772fdd63e7936bafULL,
                0xf8474c3bb7cdf024ULL, 0x829f3cf387f8795dULL,
                0x66e7a46c27f3aa2cULL, 0x1c3fd4a417c62355ULL,
                0x935745fc4798b8deULL, 0xe98f353477ad31a7ULL,
                0xa6df411fbfb21ca3ULL, 0xdc0731d78f8795daULL,
                0x536fa08fdfd90e51ULL, 0x29b7d047efec8728ULL,
            };
        }
    }
}

//--------------------------------------------------------------------------------------------------

/**
 * \brief crc.crc8 - calculate crc8
 * \author dove-zp
 * \contact https://github.com/dove-zp
 * \version 12/AUG/2018
 * \license GNU General Public License 3.0 or later
 */

//--------------------------------------------------------------------------------------------------

namespace hash
{
    namespace crc
    {
        namespace crc8
        {
            //--------------------------------------------------------------------------------------
            // NOTE: CRC8::RAM                                                  (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace ram
            {
                /**
                 * \brief generate crc8 table then calculate crc8 through loop iterations
                 * \param data value to hash
                 * \param length size of value
                 * \return crc8 hash
                 */
                inline unsigned __int8 calculate(void *data, unsigned __int32 length)
                {
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    const unsigned __int32 crc_table_length = 256;
                    unsigned __int8 crc_table[crc_table_length];

                    unsigned __int8 crc = 0;

                    unsigned __int32 i = 0;

                    for (i = 0; i < crc_table_length; i++)
                    {
                        crc = i;

                        for (unsigned __int8 j = 0; j < 8; j++)
                        {
                            crc = (crc << 1) ^ ((crc & 0x80) ? 0x07 : 0);
                        }

                        crc_table[i] = crc & 0xFF;
                    }

                    crc = 0;

                    for (i = 0; i < length; i++)
                    {
                        crc = crc_table[formatted_data[i] ^ crc];
                    }

                    return crc;
                }
            }

            //--------------------------------------------------------------------------------------
            // NOTE: CRC8::ROM                                                  (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace rom
            {
                /**
                 * \brief calculate crc8 through loop iterations with existing table
                 * \param data value to hash
                 * \param length size of value
                 * \return crc8 hash
                 */
                inline unsigned __int8 calculate(void *data, unsigned __int32 length)
                {
                    unsigned __int8 crc = 0x00;
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    for (unsigned __int32 i = 0; i < length; i++)
                    {
                        crc = hash::crc::tables::crc_8[formatted_data[i] ^ crc];
                    }
                    return crc;
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC8::ROM::META                                        (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace meta
                {
                    /**
                     * \brief recursive constexpr crc8 generator using existing table
                     * \param crc hash
                     * \param s string to iterate
                     * \return crc8 hash
                     */
                    constexpr unsigned __int8 __crc8(unsigned __int8 crc, const char *s)
                    {
                        return (*s == 0) ? crc : __crc8(hash::crc::tables::crc_8[static_cast<unsigned __int8>(crc) ^ *s], s + 1);
                    }

                    /**
                     * \brief obtain crc8 with minimal meta recursive; default crc seed already set
                     * \param s string to hash
                     * \return crc8 hash
                     */
                    constexpr unsigned __int8 calculate(const char *s)
                    {
                        return __crc8(0x00, s);
                    }
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC8::ROM::TEMPLATE                                    (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace tpl
                {
                    /**
                     * \brief structure template format for compile time array -> crc
                     * \tparam CRC hash
                     * \tparam Characters array of characters
                     */
                    template<unsigned __int8 CRC, char ...Characters>
                    struct __CRC8_t {};

                    /**
                     * \brief recursive compile time crc hash
                     * \tparam CRC hash
                     * \tparam Head iterate each character index
                     * \tparam Tail remaining characters
                     */
                    template<unsigned __int8 CRC, char Head, char ...Tail>
                    struct __CRC8_t<CRC, Head, Tail...>
                    {
                        static constexpr unsigned __int8 value = __CRC8_t<hash::crc::tables::crc_8[CRC ^ Head], Tail...>::value;
                    };

                    /**
                     * \brief obtain final crc value
                     * \tparam CRC final crc value to return
                     */
                    template<unsigned __int8 CRC>
                    struct __CRC8_t<CRC>
                    {
                        static constexpr unsigned __int8 value = CRC;
                    };

                    /**
                     * \brief obtain crc8 value on compile time (example: crc8::rom::tpl::calculate<'a', 'z'>::value)
                     * \tparam Characters template array of characters to hash
                     */
                    template<char ...Characters>
                    using calculate = __CRC8_t<0x00, Characters...>;
                }
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------

/**
 * \brief crc.crc16 - calculate crc16
 * \author dove-zp
 * \contact https://github.com/dove-zp
 * \version 12/AUG/2018
 * \license GNU General Public License 3.0 or later
 */

//--------------------------------------------------------------------------------------------------

namespace hash
{
    namespace crc
    {
        namespace crc16
        {
            //--------------------------------------------------------------------------------------
            // NOTE: CRC16::RAM                                                 (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace ram
            {
                /**
                 * \brief generate crc16 table then calculate crc16 through loop iterations
                 * \param data value to hash
                 * \param length size of value
                 * \return crc16 hash
                 */
                inline unsigned __int16 calculate(void *data, unsigned __int32 length)
                {
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    const unsigned __int32 crc_table_length = 256;
                    unsigned __int16 crc_table[crc_table_length];

                    unsigned __int16 crc = 0;

                    unsigned __int32 i = 0;

                    for (i = 0; i < crc_table_length; i++)
                    {
                        crc = i << 8;

                        for (unsigned __int8 j = 0; j < 8; j++)
                        {
                            crc = (crc & 0x8000) ? (crc << 1) ^ 0x1021 : (crc << 1);
                        }

                        crc_table[i] = crc;
                    }

                    crc = 0xFFFF;

                    for (i = 0; i < length; i++)
                    {
                        crc = ((crc << 8) & 0xFFFF) ^ crc_table[(crc >> 8) ^ (formatted_data[i] & 0xFF)];
                    }

                    return crc;
                }
            }

            //--------------------------------------------------------------------------------------
            // NOTE: CRC16::ROM                                                 (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace rom
            {
                /**
                 * \brief calculate crc16 through loop iterations with existing table
                 * \param data value to hash
                 * \param length size of value
                 * \return crc16 hash
                 */
                inline unsigned __int16 calculate(void *data, unsigned __int32 length)
                {
                    unsigned __int16 crc = 0xFFFF;
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    for (unsigned __int32 i = 0; i < length; i++)
                    {
                        crc = ((crc << 8) & 0xFFFF) ^ hash::crc::tables::crc_16[(crc >> 8) ^ (formatted_data[i] & 0xFF)];
                    }
                    return crc;
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC16::ROM::META                                       (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace meta
                {
                    /**
                     * \brief recursive constexpr crc16 generator using existing table
                     * \param crc hash
                     * \param s string to iterate
                     * \return crc16 hash
                     */
                    constexpr unsigned __int16 __crc16(unsigned __int16 crc, const char *s)
                    {
                        return (*s == 0) ? crc : __crc16(((crc << 8) & 0xFFFF) ^ hash::crc::tables::crc_16[(crc >> 8) ^ *s & 0xFF], s + 1);
                    }

                    /**
                     * \brief obtain crc16 with minimal meta recursive; default crc seed already set
                     * \param s string to hash
                     * \return crc16 hash
                     */
                    constexpr unsigned __int16 calculate(const char *s)
                    {
                        return __crc16(0xFFFF, s);
                    }
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC16::ROM::TEMPLATE                                   (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace tpl
                {
                    /**
                     * \brief structure template format for compile time array -> crc
                     * \tparam CRC hash
                     * \tparam Characters array of characters
                     */
                    template<unsigned __int16 CRC, char ...Characters>
                    struct __CRC16_t {};

                    /**
                     * \brief recursive compile time crc hash
                     * \tparam CRC hash
                     * \tparam Head iterate each character index
                     * \tparam Tail remaining characters
                     */
                    template<unsigned __int16 CRC, char Head, char ...Tail>
                    struct __CRC16_t<CRC, Head, Tail...>
                    {
                        static constexpr unsigned __int16 value = __CRC16_t<((CRC << 8) & 0xFFFF) ^ hash::crc::tables::crc_16[static_cast<unsigned char>(CRC >> 8) ^ static_cast<unsigned char>(Head & 0xFF)], Tail...>::value;
                    };

                    /**
                     * \brief obtain final crc value
                     * \tparam CRC final crc value to return
                     */
                    template<unsigned __int16 CRC>
                    struct __CRC16_t<CRC>
                    {
                        static constexpr unsigned __int16 value = CRC;
                    };

                    /**
                     * \brief obtain crc16 value on compile time (example: crc16::rom::tpl::calculate<'a', 'z'>::value)
                     * \tparam Characters template array of characters to hash
                     */
                    template<char ...Characters>
                    using calculate = __CRC16_t<0xFFFF, Characters...>;
                }
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------

/**
 * \brief crc.crc32 - calculate crc32
 * \author dove-zp
 * \contact https://github.com/dove-zp
 * \version 12/AUG/2018
 * \license GNU General Public License 3.0 or later
 */

//--------------------------------------------------------------------------------------------------

namespace hash
{
    namespace crc
    {
        namespace crc32
        {
            //--------------------------------------------------------------------------------------
            // NOTE: CRC32::RAM                                                 (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace ram
            {
                /**
                 * \brief generate crc32 table then calculate crc32 through loop iterations
                 * \param data value to hash
                 * \param length size of value
                 * \return crc32 hash
                 */
                inline unsigned __int32 calculate(void *data, unsigned __int32 length)
                {
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    const unsigned __int32 crc_table_length = 256;
                    unsigned __int32 crc_table[crc_table_length];
                    unsigned __int32 crc = 0;

                    unsigned __int32 i = 0;

                    for (i = 0; i < crc_table_length; i++)
                    {
                        crc = i;

                        for (unsigned __int8 j = 0; j < 8; j++)
                        {
                            crc = crc & 1 ? (crc >> 1) ^ 0xEDB88320 : crc >> 1;
                        }

                        crc_table[i] = crc;
                    }

                    crc = 0xFFFFFFFF;

                    for (i = 0; i < length; i++)
                    {
                        crc = crc_table[(crc ^ formatted_data[i]) & 0xFF] ^ (crc >> 8);
                    }

                    // bitwise not
                    return ~crc;
                }
            }

            //--------------------------------------------------------------------------------------
            // NOTE: CRC32::ROM                                                 (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace rom
            {
                /**
                 * \brief calculate crc32 through loop iterations with existing table
                 * \param data value to hash
                 * \param length size of value
                 * \return crc32 hash
                 */
                inline unsigned __int32 calculate(void *data, unsigned __int32 length)
                {
                    unsigned __int32 crc = 0xFFFFFFFF;
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    for (unsigned __int32 i = 0; i< length; ++i)
                    {
                        crc = ((crc >> 8) & 0x00FFFFFF) ^ hash::crc::tables::crc_32[(crc ^ static_cast<unsigned __int32>(*formatted_data++)) & 0xFF];
                    }
                    return (crc ^ 0xFFFFFFFF);
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC32::ROM::META                                       (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace meta
                {
                    /**
                     * \brief recursive constexpr crc32 generator using existing table
                     * \param crc hash
                     * \param s string to iterate
                     * \return crc32 hash
                     */
                    constexpr unsigned __int32 __crc32(unsigned __int32 crc, const char *s)
                    {
                        return *s == 0 ? crc ^ 0xFFFFFFFF : __crc32(((crc >> 8) & 0x00FFFFFF) ^ hash::crc::tables::crc_32[static_cast<unsigned __int8>(crc) ^ *s & 0xFF], s + 1);
                    }

                    /**
                     * \brief obtain crc32 with minimal meta recursive; default crc seed already set
                     * \param s string to hash
                     * \return crc32 hash
                     */
                    constexpr unsigned __int32 calculate(const char *s)
                    {
                        return __crc32(0xFFFFFFFF, s);
                    }
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC32::ROM::TEMPLATE                                   (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace tpl
                {
                    /**
                     * \brief structure template format for compile time array -> crc
                     * \tparam CRC hash
                     * \tparam Characters array of characters
                     */
                    template<unsigned __int32 CRC, char ...Characters>
                    struct __CRC32_t {};

                    /**
                     * \brief recursive compile time crc hash
                     * \tparam CRC hash
                     * \tparam Head iterate each character index
                     * \tparam Tail remaining characters
                     */
                    template<unsigned __int32 CRC, char Head, char ...Tail>
                    struct __CRC32_t<CRC, Head, Tail...>
                    {
                        static constexpr unsigned __int32 value = __CRC32_t<hash::crc::tables::crc_32[static_cast<unsigned char>(CRC) ^ static_cast<unsigned char>(Head)] ^ (CRC >> 8), Tail...>::value;
                    };

                    /**
                     * \brief obtain final crc value
                     * \tparam CRC final crc value to xor and return
                     */
                    template<unsigned __int32 CRC>
                    struct __CRC32_t<CRC>
                    {
                        static constexpr unsigned __int32 value = CRC ^ 0xFFFFFFFF;
                    };

                    /**
                     * \brief obtain crc32 value on compile time (example: crc32::rom::tpl::calculate<'a', 'z'>::value)
                     * \tparam Characters template array of characters to hash
                     */
                    template<char ...Characters>
                    using calculate = __CRC32_t<0xFFFFFFFF, Characters...>;
                }
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------

/**
 * \brief crc.crc64 - calculate crc64
 * \author dove-zp
 * \contact https://github.com/dove-zp
 * \version 12/AUG/2018
 * \license GNU General Public License 3.0 or later
 */

//--------------------------------------------------------------------------------------------------

namespace hash
{
    namespace crc
    {
        namespace crc64
        {
            //--------------------------------------------------------------------------------------
            // NOTE: CRC64::RAM                                                 (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace ram
            {
                /**
                 * \brief generate crc64 table then calculate crc64 through loop iterations
                 * \param data value to hash
                 * \param length size of value
                 * \return crc64 hash
                 */
                inline unsigned __int64 calculate(void *data, unsigned __int32 length)
                {
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    const unsigned __int32 crc_table_length = 256;
                    unsigned __int64 crc_table[crc_table_length];
                    unsigned __int64 crc = 0;

                    unsigned __int32 i = 0;

                    for (i = 0; i < crc_table_length; i++)
                    {
                        crc = i;

                        for (unsigned __int8 j = 0; j < 8; j++)
                        {
                            crc = crc & 1 ? (crc >> 1) ^ 0x95AC9329AC4BC9B5ULL : crc >> 1;
                        }

                        crc_table[i] = crc;
                    }

                    crc = 0xFFFFFFFFFFFFFFFFULL;

                    for (i = 0; i < length; i++)
                    {
                        crc = crc_table[(static_cast<unsigned __int8>(crc) ^ formatted_data[i]) & 0xFF] ^ (crc >> 8);
                    }

                    return crc;
                }
            }

            //--------------------------------------------------------------------------------------
            // NOTE: CRC64::ROM                                                 (LOCATION MARK) TODO
            //--------------------------------------------------------------------------------------

            namespace rom
            {
                /**
                 * \brief calculate crc64 through loop iterations with existing table
                 * \param data value to hash
                 * \param length size of value
                 * \return crc64 hash
                 */
                inline unsigned __int64 calculate(void *data, unsigned __int32 length)
                {
                    unsigned __int64 crc = 0xFFFFFFFFFFFFFFFFULL;
                    auto* formatted_data = static_cast<unsigned __int8*>(data);

                    for (unsigned __int32 i = 0; i< length; ++i)
                    {
                        crc = hash::crc::tables::crc_64[(static_cast<unsigned __int8>(crc) ^ formatted_data[i]) & 0xFF] ^ (crc >> 8);
                    }
                    return crc;
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC64::ROM::META                                       (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace meta
                {
                    /**
                     * \brief recursive constexpr crc64 generator using existing table
                     * \param crc hash
                     * \param s string to iterate
                     * \return crc64 hash
                     */
                    constexpr unsigned __int64 __crc64(unsigned __int64 crc, const char *s)
                    {
                        return *s == 0 ? crc : __crc64(hash::crc::tables::crc_64[(static_cast<unsigned __int8>(crc) ^ *s) & 0xFF] ^ (crc >> 8), s + 1);
                    }

                    /**
                     * \brief obtain crc64 with minimal meta recursive; default crc seed already set
                     * \param s string to hash
                     * \return crc64 hash
                     */
                    constexpr unsigned __int64 calculate(const char *s)
                    {
                        return __crc64(0xFFFFFFFFFFFFFFFFULL, s);
                    }
                }

                //----------------------------------------------------------------------------------
                // NOTE: CRC64::ROM::TEMPLATE                                   (LOCATION MARK) TODO
                //----------------------------------------------------------------------------------

                namespace tpl
                {
                    /**
                     * \brief structure template format for compile time array -> crc
                     * \tparam CRC hash
                     * \tparam Characters array of characters
                     */
                    template<unsigned __int64 CRC, char ...Characters>
                    struct __CRC64_t {};

                    /**
                     * \brief recursive compile time crc hash
                     * \tparam CRC hash
                     * \tparam Head iterate each character index
                     * \tparam Tail remaining characters
                     */
                    template<unsigned __int64 CRC, char Head, char ...Tail>
                    struct __CRC64_t<CRC, Head, Tail...>
                    {
                        static constexpr unsigned __int64 value = __CRC64_t<hash::crc::tables::crc_64[(static_cast<unsigned __int8>(CRC) ^ Head) & 0xFF] ^ (CRC >> 8), Tail...>::value;
                    };

                    /**
                     * \brief obtain final crc value
                     * \tparam CRC final crc value to return
                     */
                    template<unsigned __int64 CRC>
                    struct __CRC64_t<CRC>
                    {
                        static constexpr unsigned __int64 value = CRC;
                    };

                    /**
                     * \brief obtain crc64 value on compile time (example: crc64::rom::tpl::calculate<'a', 'z'>::value)
                     * \tparam Characters template array of characters to hash
                     */
                    template<char ...Characters>
                    using calculate = __CRC64_t<0xFFFFFFFFFFFFFFFFULL, Characters...>;
                }
            }
        }
    }
}