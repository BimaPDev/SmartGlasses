/* FUN_100e25c4 @ 0x100e25c4 */

void FUN_100e25c4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 7) {
    iVar3 = (int)*(char *)(param_2 + param_1 + 0x1c);
    if ((param_3 <= *(uint *)(PTR_LAB_100e26b4 + iVar3 * 0xc + 8)) &&
       (*(uint *)(PTR_LAB_100e26b4 + iVar3 * 0xc + 4) <= param_3)) {
      switch(iVar3) {
      case 0:
        if (*DAT_100e26bc == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100e26bc + 0xc);
        break;
      case 1:
        if (*DAT_100e26bc == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100e26bc + 0x10);
        break;
      case 2:
        if (*DAT_100e26bc == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100e26bc + 0x14);
        break;
      case 3:
        if (*DAT_100e26bc == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100e26bc + 0x18);
        break;
      case 4:
        if (*DAT_100e26bc == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100e26bc + 0x1c);
        break;
      case 5:
        if (*DAT_100e26bc == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100e26bc + 0x20);
        break;
      case 6:
        if (*DAT_100e26bc == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100e26bc + 0x24);
        break;
      default:
        FUN_100a5b78(DAT_100e26c0 | (DAT_100e26a8 - DAT_100e26a4) * 0x20 & 0xff00U,DAT_100e26c4);
        return;
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x100e2646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(**(undefined4 **)(param_1 + -0xa4));
      return;
    }
    uVar1 = (DAT_100e26a8 - DAT_100e26a4) * 0x20 & 0xff00U | 0x1480011;
    puVar2 = PTR_s_Indicators_out_of_range___value__100e26b8;
  }
  else {
    param_3 = 7;
    uVar1 = DAT_100e26ac | (DAT_100e26a8 - DAT_100e26a4) * 0x20 & 0xff00U;
    puVar2 = PTR_s_Max_only__lu_indicators_are_supp_100e26b0;
  }
  FUN_100a5b78(uVar1,puVar2,param_3);
  return;
}

