// license:???
// copyright-holders:???
static const PPC_OPCODE ppcdrc_opcode_common[] =
{
	/*code  subcode         handler                 */
	{ 31,   266,            recompile_addx              },
	{ 31,   266 | 512,      recompile_addx              },
	{ 31,   10,             recompile_addcx             },
	{ 31,   10 | 512,       recompile_addcx             },
	{ 31,   138,            recompile_addex             },
	{ 31,   138 | 512,      recompile_addex             },
	{ 14,   -1,             recompile_addi              },
	{ 12,   -1,             recompile_addic             },
	{ 13,   -1,             recompile_addic_rc          },
	{ 15,   -1,             recompile_addis             },
	{ 31,   234,            recompile_addmex            },
	{ 31,   234 | 512,      recompile_addmex            },
	{ 31,   202,            recompile_addzex            },
	{ 31,   202 | 512,      recompile_addzex            },
	{ 31,   28,             recompile_andx              },
	{ 31,   28 | 512,       recompile_andx              },
	{ 31,   60,             recompile_andcx             },
	{ 28,   -1,             recompile_andi_rc           },
	{ 29,   -1,             recompile_andis_rc          },
	{ 18,   -1,             recompile_bx                },
	{ 16,   -1,             recompile_bcx               },
	{ 19,   528,            recompile_bcctrx            },
	{ 19,   16,             recompile_bclrx             },
	{ 31,   0,              recompile_cmp               },
	{ 11,   -1,             recompile_cmpi              },
	{ 31,   32,             recompile_cmpl              },
	{ 10,   -1,             recompile_cmpli             },
	{ 31,   26,             recompile_cntlzw            },
	{ 19,   257,            recompile_crand             },
	{ 19,   129,            recompile_crandc            },
	{ 19,   289,            recompile_creqv             },
	{ 19,   225,            recompile_crnand            },
	{ 19,   33,             recompile_crnor             },
	{ 19,   449,            recompile_cror              },
	{ 19,   417,            recompile_crorc             },
	{ 19,   193,            recompile_crxor             },
	{ 31,   86,             recompile_dcbf              },
	{ 31,   470,            recompile_dcbi              },
	{ 31,   54,             recompile_dcbst             },
	{ 31,   278,            recompile_dcbt              },
	{ 31,   246,            recompile_dcbtst            },
	{ 31,   1014,           recompile_dcbz              },
	{ 31,   491,            recompile_divwx             },
	{ 31,   491 | 512,      recompile_divwx             },
	{ 31,   459,            recompile_divwux            },
	{ 31,   459 | 512,      recompile_divwux            },
	{ 31,   854,            recompile_eieio             },
	{ 31,   284,            recompile_eqvx              },
	{ 31,   954,            recompile_extsbx            },
	{ 31,   922,            recompile_extshx            },
	{ 31,   982,            recompile_icbi              },
	{ 19,   150,            recompile_isync             },
	{ 34,   -1,             recompile_lbz               },
	{ 35,   -1,             recompile_lbzu              },
	{ 31,   119,            recompile_lbzux             },
	{ 31,   87,             recompile_lbzx              },
	{ 42,   -1,             recompile_lha               },
	{ 43,   -1,             recompile_lhau              },
	{ 31,   375,            recompile_lhaux             },
	{ 31,   343,            recompile_lhax              },
	{ 31,   790,            recompile_lhbrx             },
	{ 40,   -1,             recompile_lhz               },
	{ 41,   -1,             recompile_lhzu              },
	{ 31,   311,            recompile_lhzux             },
	{ 31,   279,            recompile_lhzx              },
	{ 46,   -1,             recompile_lmw               },
	{ 31,   597,            recompile_lswi              },
	{ 31,   533,            recompile_lswx              },
	{ 31,   20,             recompile_lwarx             },
	{ 31,   534,            recompile_lwbrx             },
	{ 32,   -1,             recompile_lwz               },
	{ 33,   -1,             recompile_lwzu              },
	{ 31,   55,             recompile_lwzux             },
	{ 31,   23,             recompile_lwzx              },
	{ 19,   0,              recompile_mcrf              },
	{ 31,   512,            recompile_mcrxr             },
	{ 31,   19,             recompile_mfcr              },
	{ 31,   83,             recompile_mfmsr             },
	{ 31,   339,            recompile_mfspr             },
	{ 31,   144,            recompile_mtcrf             },
	{ 31,   146,            recompile_mtmsr             },
	{ 31,   467,            recompile_mtspr             },
	{ 31,   75,             recompile_mulhwx            },
	{ 31,   11,             recompile_mulhwux           },
	{ 7,    -1,             recompile_mulli             },
	{ 31,   235,            recompile_mullwx            },
	{ 31,   235 | 512,      recompile_mullwx            },
	{ 31,   476,            recompile_nandx             },
	{ 31,   104,            recompile_negx              },
	{ 31,   104 | 512,      recompile_negx              },
	{ 31,   124,            recompile_norx              },
	{ 31,   444,            recompile_orx               },
	{ 31,   412,            recompile_orcx              },
	{ 24,   -1,             recompile_ori               },
	{ 25,   -1,             recompile_oris              },
	{ 19,   50,             recompile_rfi               },
	{ 20,   -1,             recompile_rlwimix           },
	{ 21,   -1,             recompile_rlwinmx           },
	{ 23,   -1,             recompile_rlwnmx            },
	{ 17,   -1,             recompile_sc                },
	{ 31,   24,             recompile_slwx              },
	{ 31,   792,            recompile_srawx             },
	{ 31,   824,            recompile_srawix            },
	{ 31,   536,            recompile_srwx              },
	{ 38,   -1,             recompile_stb               },
	{ 39,   -1,             recompile_stbu              },
	{ 31,   247,            recompile_stbux             },
	{ 31,   215,            recompile_stbx              },
	{ 44,   -1,             recompile_sth               },
	{ 31,   918,            recompile_sthbrx            },
	{ 45,   -1,             recompile_sthu              },
	{ 31,   439,            recompile_sthux             },
	{ 31,   407,            recompile_sthx              },
	{ 47,   -1,             recompile_stmw              },
	{ 31,   725,            recompile_stswi             },
	{ 31,   661,            recompile_stswx             },
	{ 36,   -1,             recompile_stw               },
	{ 31,   662,            recompile_stwbrx            },
	{ 31,   150,            recompile_stwcx_rc          },
	{ 37,   -1,             recompile_stwu              },
	{ 31,   183,            recompile_stwux             },
	{ 31,   151,            recompile_stwx              },
	{ 31,   40,             recompile_subfx             },
	{ 31,   40 | 512,       recompile_subfx             },
	{ 31,   8,              recompile_subfcx            },
	{ 31,   8 | 512,        recompile_subfcx            },
	{ 31,   136,            recompile_subfex            },
	{ 31,   136 | 512,      recompile_subfex            },
	{ 8,    -1,             recompile_subfic            },
	{ 31,   232,            recompile_subfmex           },
	{ 31,   232 | 512,      recompile_subfmex           },
	{ 31,   200,            recompile_subfzex           },
	{ 31,   200 | 512,      recompile_subfzex           },
	{ 31,   598,            recompile_sync              },
	{ 31,   4,              recompile_tw                },
	{ 3,    -1,             recompile_twi               },
	{ 31,   316,            recompile_xorx              },
	{ 26,   -1,             recompile_xori              },
	{ 27,   -1,             recompile_xoris             }
};
