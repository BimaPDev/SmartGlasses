/* FUN_2c43c3d6 @ 0x2c43c3d6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43c3d6(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  _Reserved3 = (undefined2)param_1;
  param_3 = param_3 >> 0x19;
  iVar1 = param_3 - ((int)(uint)uRam00000036 >> 10);
  iVar2 = param_3 - 0x9a;
  if (iRam2c43bf18 == 0) {
    if (param_3 < 0x9a) {
      iVar2 = *(int *)(iVar1 + 0xc);
      iVar1 = *(int *)((uint)*(byte *)(uRam00000036 + 0x11) * 0x4000 + 8) + 5;
    }
    *(short *)(iVar1 + 0x18) = (short)iVar2;
    *(undefined4 *)(param_1 + 0x18) = 0x2c43becc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_0000000a = (undefined1)iVar2;
  if (SBORROW4(param_3,0x9a)) {
    iRam0000004a = iRam2c43bf18;
    if (-1 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(*(int *)(iVar1 + 8) + iVar1 + 0x10) = (char)(iVar1 + 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

