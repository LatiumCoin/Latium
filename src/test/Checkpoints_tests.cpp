//
// Unit tests for block-chain checkpoints
//
#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/test/unit_test.hpp>
#include <boost/foreach.hpp>

#include "../checkpoints.h"
#include "../util.h"
#include "../main.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(Checkpoints_tests)

BOOST_AUTO_TEST_CASE(sanity) {

    uint256 p0 = hashGenesisBlockOfficial;
    uint256 p2 = uint256("0x0000030667abc78f4d3c7f34407da9e57372d2c0450daf23c4805237d1fb52c7");
    BOOST_CHECK(Checkpoints::CheckHardened(0, p0));
    BOOST_CHECK(Checkpoints::CheckHardened(2, p2));

    
    // Wrong hashes at checkpoints should fail:
    BOOST_CHECK(!Checkpoints::CheckHardened(0, p2));
    BOOST_CHECK(!Checkpoints::CheckHardened(2, p0));

    // ... but any hash not at a checkpoint should succeed:
    BOOST_CHECK(Checkpoints::CheckHardened(1, p2));
    BOOST_CHECK(Checkpoints::CheckHardened(3, p0));

    BOOST_CHECK(Checkpoints::GetTotalBlocksEstimate() >= 2);

}    

BOOST_AUTO_TEST_SUITE_END()
