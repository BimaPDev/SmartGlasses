/* FUN_14071714 @ 0x14071714 */

int FUN_14071714(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)(short)((short)param_3 + -1);
  while( true ) {
    while( true ) {
      uVar3 = iVar5 + iVar4;
      if (param_3 <= (uVar3 & 0x1ffff) >> 1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1407177c,0x80b,DAT_14071778,param_4);
      }
      uVar2 = (uint)*(byte *)(param_2 + ((int)uVar3 >> 1) * 8);
      sVar1 = (short)(uVar3 * 0x8000 >> 0x10);
      if (param_1 <= uVar2) break;
      iVar5 = (int)(short)(sVar1 + 1);
      if (iVar4 < iVar5) {
        return 0;
      }
    }
    if (uVar2 <= param_1) break;
    iVar4 = (int)(short)(sVar1 + -1);
    if (iVar4 < iVar5) {
      return 0;
    }
  }
  return param_2 + ((int)uVar3 >> 1) * 8;
}

