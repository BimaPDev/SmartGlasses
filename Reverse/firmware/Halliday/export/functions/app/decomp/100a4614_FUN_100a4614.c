/* FUN_100a4614 @ 0x100a4614 */

undefined4 FUN_100a4614(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_100a4648;
  iVar2 = 0;
  iVar3 = DAT_100a4648;
  do {
    if (param_1 == 0) {
      if (*(int *)(iVar3 + 4) < 2) goto LAB_100a4628;
    }
    else if (*(int *)(iVar3 + 0xcc) < 2) {
      iVar2 = iVar2 + 0x19;
LAB_100a4628:
      *(undefined4 *)(DAT_100a4648 + iVar2 * 8 + 4) = param_3;
      *(undefined4 *)(iVar1 + iVar2 * 8) = param_2;
      return 0;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 8;
    if (iVar2 == 0x19) {
      return 0;
    }
  } while( true );
}

