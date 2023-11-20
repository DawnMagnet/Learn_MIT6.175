/*
 * Generated by Bluespec Compiler, version 2023.07-15-g10e1952c (build 10e1952c)
 * 
 * On Tue Oct 31 16:10:51 CST 2023
 * 
 */
#include "bluesim_primitives.h"
#include "mkTbBS.h"
#include "imported_BDPI_functions.h"


/* String declarations */
static std::string const __str_literal_2("%b >> %b = %b instead of %b", 27u);
static std::string const __str_literal_3("FAILED %b >> %b gave %b instead of %b", 37u);
static std::string const __str_literal_1("PASSED", 6u);


/* Constructor */
MOD_mkTbBS::MOD_mkTbBS(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_cycle(simHdl, "cycle", this, 32u, 0u, (tUInt8)0u),
    INST_randomVal1_ignore(simHdl, "randomVal1_ignore", this, 32u, (tUInt8)0u),
    INST_randomVal1_initialized(simHdl, "randomVal1_initialized", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_randomVal1_zaz(simHdl, "randomVal1_zaz", this, 32u, (tUInt8)0u),
    INST_randomVal2_ignore(simHdl, "randomVal2_ignore", this, 5u, (tUInt8)0u),
    INST_randomVal2_initialized(simHdl, "randomVal2_initialized", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_randomVal2_zaz(simHdl, "randomVal2_zaz", this, 5u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u),
    DEF_v__h727(2863311530u),
    DEF_new_value__h393(2863311530u)
{
  symbol_count = 13u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkTbBS::init_symbols_0()
{
  init_symbol(&symbols[0u], "cycle", SYM_MODULE, &INST_cycle);
  init_symbol(&symbols[1u], "RL_randomVal1_every", SYM_RULE);
  init_symbol(&symbols[2u], "RL_randomVal1_every_1", SYM_RULE);
  init_symbol(&symbols[3u], "RL_randomVal2_every", SYM_RULE);
  init_symbol(&symbols[4u], "RL_randomVal2_every_1", SYM_RULE);
  init_symbol(&symbols[5u], "RL_test", SYM_RULE);
  init_symbol(&symbols[6u], "randomVal1_ignore", SYM_MODULE, &INST_randomVal1_ignore);
  init_symbol(&symbols[7u], "randomVal1_initialized", SYM_MODULE, &INST_randomVal1_initialized);
  init_symbol(&symbols[8u], "randomVal1_zaz", SYM_MODULE, &INST_randomVal1_zaz);
  init_symbol(&symbols[9u], "randomVal2_ignore", SYM_MODULE, &INST_randomVal2_ignore);
  init_symbol(&symbols[10u], "randomVal2_initialized", SYM_MODULE, &INST_randomVal2_initialized);
  init_symbol(&symbols[11u], "randomVal2_zaz", SYM_MODULE, &INST_randomVal2_zaz);
  init_symbol(&symbols[12u], "x__h979", SYM_DEF, &DEF_x__h979, 32u);
}


/* Rule actions */

void MOD_mkTbBS::RL_randomVal1_every()
{
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    rand32();
    DEF_new_value__h393 = rand32();
  }
  INST_randomVal1_zaz.METH_wset(DEF_new_value__h393);
}

void MOD_mkTbBS::RL_randomVal1_every_1()
{
  DEF_x_wget__h249 = INST_randomVal1_zaz.METH_wget();
  DEF_v__h425 = INST_randomVal1_zaz.METH_whas() ? DEF_x_wget__h249 : 0u;
  INST_randomVal1_ignore.METH_wset(DEF_v__h425);
}

void MOD_mkTbBS::RL_randomVal2_every()
{
  tUInt8 DEF_new_value__h769;
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_v__h727 = rand32();
  DEF_new_value__h769 = (tUInt8)((tUInt8)31u & DEF_v__h727);
  INST_randomVal2_zaz.METH_wset(DEF_new_value__h769);
}

void MOD_mkTbBS::RL_randomVal2_every_1()
{
  DEF_x_wget__h670 = INST_randomVal2_zaz.METH_wget();
  DEF_v__h800 = INST_randomVal2_zaz.METH_whas() ? DEF_x_wget__h670 : (tUInt8)0u;
  INST_randomVal2_ignore.METH_wset(DEF_v__h800);
}

void MOD_mkTbBS::RL_test()
{
  tUInt32 DEF_x__h10986;
  tUInt8 DEF_NOT_cycle_4_EQ_0_5_0_AND_NOT_cycle_4_EQ_128_6_1___d22;
  tUInt8 DEF_NOT_cycle_4_EQ_0_5___d20;
  tUInt8 DEF_NOT_cycle_4_EQ_0_5_0_AND_NOT_cycle_4_EQ_128_6__ETC___d72;
  tUInt8 DEF_NOT_cycle_4_EQ_128_6___d21;
  tUInt32 DEF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz_wge_ETC___d68;
  tUInt32 DEF_test__h1164;
  tUInt32 DEF_IF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz__ETC___d29;
  tUInt32 DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d37;
  tUInt32 DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d45;
  tUInt32 DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d53;
  tUInt32 DEF_unshifted__h1470;
  tUInt32 DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d61;
  tUInt32 DEF_unshifted__h1506;
  tUInt32 DEF_unshifted__h1542;
  tUInt32 DEF_unshifted__h1578;
  DEF_x_wget__h249 = INST_randomVal1_zaz.METH_wget();
  DEF_x__h979 = INST_cycle.METH_read();
  DEF_x_wget__h670 = INST_randomVal2_zaz.METH_wget();
  DEF_v__h425 = INST_randomVal1_zaz.METH_whas() ? DEF_x_wget__h249 : 0u;
  DEF_IF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz__ETC___d29 = (tUInt8)((tUInt8)1u & (DEF_v__h425 >> 1u)) ? 1u : 0u;
  DEF_v__h800 = INST_randomVal2_zaz.METH_whas() ? DEF_x_wget__h670 : (tUInt8)0u;
  DEF_unshifted__h1578 = (tUInt8)((tUInt8)1u & DEF_v__h800) ? (((((tUInt32)((tUInt8)(DEF_IF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz__ETC___d29 >> 31u))) << 31u) | (((tUInt32)((tUInt8)(DEF_v__h425 >> 31u))) << 30u)) | (((tUInt32)(536870911u & (DEF_v__h425 >> 2u))) << 1u)) | (tUInt32)((tUInt8)((tUInt8)1u & DEF_IF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz__ETC___d29)) : DEF_v__h425;
  DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d37 = (tUInt8)((tUInt8)1u & (DEF_unshifted__h1578 >> 2u)) ? 1u : 0u;
  DEF_unshifted__h1542 = (tUInt8)((tUInt8)1u & (DEF_v__h800 >> 1u)) ? (((((tUInt32)((tUInt8)(DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d37 >> 30u))) << 30u) | (((tUInt32)((tUInt8)(DEF_unshifted__h1578 >> 31u))) << 29u)) | (((tUInt32)(268435455u & (DEF_unshifted__h1578 >> 3u))) << 1u)) | (tUInt32)((tUInt8)((tUInt8)1u & DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d37)) : DEF_unshifted__h1578;
  DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d45 = (tUInt8)((tUInt8)1u & (DEF_unshifted__h1542 >> 4u)) ? 1u : 0u;
  DEF_unshifted__h1506 = (tUInt8)((tUInt8)1u & (DEF_v__h800 >> 2u)) ? (((((tUInt32)((tUInt8)(DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d45 >> 28u))) << 28u) | (((tUInt32)((tUInt8)(DEF_unshifted__h1542 >> 31u))) << 27u)) | (((tUInt32)(67108863u & (DEF_unshifted__h1542 >> 5u))) << 1u)) | (tUInt32)((tUInt8)((tUInt8)1u & DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d45)) : DEF_unshifted__h1542;
  DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d53 = (tUInt8)((tUInt8)1u & (DEF_unshifted__h1506 >> 8u)) ? 1u : 0u;
  DEF_unshifted__h1470 = (tUInt8)((tUInt8)1u & (DEF_v__h800 >> 3u)) ? (((((tUInt32)((tUInt8)(DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d53 >> 24u))) << 24u) | (((tUInt32)((tUInt8)(DEF_unshifted__h1506 >> 31u))) << 23u)) | (((tUInt32)(4194303u & (DEF_unshifted__h1506 >> 9u))) << 1u)) | (tUInt32)((tUInt8)((tUInt8)1u & DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d53)) : DEF_unshifted__h1506;
  DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d61 = (tUInt8)((tUInt8)1u & (DEF_unshifted__h1470 >> 16u)) ? 1u : 0u;
  DEF_test__h1164 = (tUInt8)(DEF_v__h800 >> 4u) ? (((((tUInt32)(DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d61 >> 16u)) << 16u) | (((tUInt32)((tUInt8)(DEF_unshifted__h1470 >> 31u))) << 15u)) | (((tUInt32)(16383u & (DEF_unshifted__h1470 >> 17u))) << 1u)) | (tUInt32)((tUInt8)((tUInt8)1u & DEF_IF_IF_IF_randomVal2_zaz_whas__1_THEN_randomVal_ETC___d61)) : DEF_unshifted__h1470;
  DEF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz_wge_ETC___d68 = primShiftR32(32u,
									      32u,
									      (tUInt32)(DEF_v__h425),
									      5u,
									      (tUInt8)(DEF_v__h800));
  DEF_cycle_4_EQ_128___d16 = DEF_x__h979 == 128u;
  DEF_cycle_4_EQ_0___d15 = DEF_x__h979 == 0u;
  DEF_NOT_cycle_4_EQ_128_6___d21 = !DEF_cycle_4_EQ_128___d16;
  DEF_NOT_cycle_4_EQ_0_5___d20 = !DEF_cycle_4_EQ_0___d15;
  DEF_NOT_cycle_4_EQ_0_5_0_AND_NOT_cycle_4_EQ_128_6__ETC___d72 = DEF_NOT_cycle_4_EQ_0_5___d20 && (DEF_NOT_cycle_4_EQ_128_6___d21 && !(DEF_test__h1164 == DEF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz_wge_ETC___d68));
  DEF_NOT_cycle_4_EQ_0_5_0_AND_NOT_cycle_4_EQ_128_6_1___d22 = DEF_NOT_cycle_4_EQ_0_5___d20 && DEF_NOT_cycle_4_EQ_128_6___d21;
  DEF_x__h10986 = DEF_x__h979 + 1u;
  if (DEF_cycle_4_EQ_0___d15)
    INST_randomVal1_initialized.METH_write((tUInt8)1u);
  if (DEF_cycle_4_EQ_0___d15)
    INST_randomVal2_initialized.METH_write((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_cycle_4_EQ_128___d16)
      dollar_display(sim_hdl, this, "s", &__str_literal_1);
    if (DEF_cycle_4_EQ_128___d16)
      dollar_finish(sim_hdl, "32", 1u);
    if (DEF_NOT_cycle_4_EQ_0_5_0_AND_NOT_cycle_4_EQ_128_6_1___d22)
      dollar_display(sim_hdl,
		     this,
		     "s,32,5,32,32",
		     &__str_literal_2,
		     DEF_v__h425,
		     DEF_v__h800,
		     DEF_test__h1164,
		     DEF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz_wge_ETC___d68);
    if (DEF_NOT_cycle_4_EQ_0_5_0_AND_NOT_cycle_4_EQ_128_6__ETC___d72)
      dollar_display(sim_hdl,
		     this,
		     "s,32,5,32,32",
		     &__str_literal_3,
		     DEF_v__h425,
		     DEF_v__h800,
		     DEF_test__h1164,
		     DEF_IF_randomVal1_zaz_whas_THEN_randomVal1_zaz_wge_ETC___d68);
    if (DEF_NOT_cycle_4_EQ_0_5_0_AND_NOT_cycle_4_EQ_128_6__ETC___d72)
      dollar_finish(sim_hdl, "32", 1u);
  }
  INST_cycle.METH_write(DEF_x__h10986);
}


/* Methods */


/* Reset routines */

void MOD_mkTbBS::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_randomVal2_initialized.reset_RST(ARG_rst_in);
  INST_randomVal1_initialized.reset_RST(ARG_rst_in);
  INST_cycle.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkTbBS::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkTbBS::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_cycle.dump_state(indent + 2u);
  INST_randomVal1_ignore.dump_state(indent + 2u);
  INST_randomVal1_initialized.dump_state(indent + 2u);
  INST_randomVal1_zaz.dump_state(indent + 2u);
  INST_randomVal2_ignore.dump_state(indent + 2u);
  INST_randomVal2_initialized.dump_state(indent + 2u);
  INST_randomVal2_zaz.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkTbBS::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 17u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "cycle_4_EQ_0___d15", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "cycle_4_EQ_128___d16", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "new_value__h393", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h425", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h727", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h800", 5u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h979", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x_wget__h249", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x_wget__h670", 5u);
  num = INST_cycle.dump_VCD_defs(num);
  num = INST_randomVal1_ignore.dump_VCD_defs(num);
  num = INST_randomVal1_initialized.dump_VCD_defs(num);
  num = INST_randomVal1_zaz.dump_VCD_defs(num);
  num = INST_randomVal2_ignore.dump_VCD_defs(num);
  num = INST_randomVal2_initialized.dump_VCD_defs(num);
  num = INST_randomVal2_zaz.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkTbBS::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTbBS &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkTbBS::vcd_defs(tVCDDumpType dt, MOD_mkTbBS &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 5u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 5u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_cycle_4_EQ_0___d15) != DEF_cycle_4_EQ_0___d15)
      {
	vcd_write_val(sim_hdl, num, DEF_cycle_4_EQ_0___d15, 1u);
	backing.DEF_cycle_4_EQ_0___d15 = DEF_cycle_4_EQ_0___d15;
      }
      ++num;
      if ((backing.DEF_cycle_4_EQ_128___d16) != DEF_cycle_4_EQ_128___d16)
      {
	vcd_write_val(sim_hdl, num, DEF_cycle_4_EQ_128___d16, 1u);
	backing.DEF_cycle_4_EQ_128___d16 = DEF_cycle_4_EQ_128___d16;
      }
      ++num;
      if ((backing.DEF_new_value__h393) != DEF_new_value__h393)
      {
	vcd_write_val(sim_hdl, num, DEF_new_value__h393, 32u);
	backing.DEF_new_value__h393 = DEF_new_value__h393;
      }
      ++num;
      if ((backing.DEF_v__h425) != DEF_v__h425)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h425, 32u);
	backing.DEF_v__h425 = DEF_v__h425;
      }
      ++num;
      if ((backing.DEF_v__h727) != DEF_v__h727)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h727, 32u);
	backing.DEF_v__h727 = DEF_v__h727;
      }
      ++num;
      if ((backing.DEF_v__h800) != DEF_v__h800)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h800, 5u);
	backing.DEF_v__h800 = DEF_v__h800;
      }
      ++num;
      if ((backing.DEF_x__h979) != DEF_x__h979)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h979, 32u);
	backing.DEF_x__h979 = DEF_x__h979;
      }
      ++num;
      if ((backing.DEF_x_wget__h249) != DEF_x_wget__h249)
      {
	vcd_write_val(sim_hdl, num, DEF_x_wget__h249, 32u);
	backing.DEF_x_wget__h249 = DEF_x_wget__h249;
      }
      ++num;
      if ((backing.DEF_x_wget__h670) != DEF_x_wget__h670)
      {
	vcd_write_val(sim_hdl, num, DEF_x_wget__h670, 5u);
	backing.DEF_x_wget__h670 = DEF_x_wget__h670;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_cycle_4_EQ_0___d15, 1u);
      backing.DEF_cycle_4_EQ_0___d15 = DEF_cycle_4_EQ_0___d15;
      vcd_write_val(sim_hdl, num++, DEF_cycle_4_EQ_128___d16, 1u);
      backing.DEF_cycle_4_EQ_128___d16 = DEF_cycle_4_EQ_128___d16;
      vcd_write_val(sim_hdl, num++, DEF_new_value__h393, 32u);
      backing.DEF_new_value__h393 = DEF_new_value__h393;
      vcd_write_val(sim_hdl, num++, DEF_v__h425, 32u);
      backing.DEF_v__h425 = DEF_v__h425;
      vcd_write_val(sim_hdl, num++, DEF_v__h727, 32u);
      backing.DEF_v__h727 = DEF_v__h727;
      vcd_write_val(sim_hdl, num++, DEF_v__h800, 5u);
      backing.DEF_v__h800 = DEF_v__h800;
      vcd_write_val(sim_hdl, num++, DEF_x__h979, 32u);
      backing.DEF_x__h979 = DEF_x__h979;
      vcd_write_val(sim_hdl, num++, DEF_x_wget__h249, 32u);
      backing.DEF_x_wget__h249 = DEF_x_wget__h249;
      vcd_write_val(sim_hdl, num++, DEF_x_wget__h670, 5u);
      backing.DEF_x_wget__h670 = DEF_x_wget__h670;
    }
}

void MOD_mkTbBS::vcd_prims(tVCDDumpType dt, MOD_mkTbBS &backing)
{
  INST_cycle.dump_VCD(dt, backing.INST_cycle);
  INST_randomVal1_ignore.dump_VCD(dt, backing.INST_randomVal1_ignore);
  INST_randomVal1_initialized.dump_VCD(dt, backing.INST_randomVal1_initialized);
  INST_randomVal1_zaz.dump_VCD(dt, backing.INST_randomVal1_zaz);
  INST_randomVal2_ignore.dump_VCD(dt, backing.INST_randomVal2_ignore);
  INST_randomVal2_initialized.dump_VCD(dt, backing.INST_randomVal2_initialized);
  INST_randomVal2_zaz.dump_VCD(dt, backing.INST_randomVal2_zaz);
}
