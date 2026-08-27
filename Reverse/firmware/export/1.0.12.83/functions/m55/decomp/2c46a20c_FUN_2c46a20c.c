/* FUN_2c46a20c @ 0x2c46a20c */

int * FUN_2c46a20c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_2c6685b4(1,0x38);
  if (piVar1 != (int *)0x0) {
    piVar1[7] = param_2;
    *piVar1 = param_1;
    iVar2 = FUN_2c6685b4(param_1,0x10);
    piVar1[10] = iVar2;
    if (iVar2 != 0) {
      piVar1[0xb] = param_3;
      piVar1[0xc] = param_4;
      piVar1[0xd] = param_5;
      if (0 < param_1) {
        iVar4 = 0;
        do {
          iVar3 = iVar4 * 0x10;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar2 + iVar3) = 0xffffffff;
        } while (param_1 != iVar4);
      }
      return piVar1;
    }
  }
  FUN_2c46a1e4(uRam2c46a260);
  piVar1 = (int *)FUN_2c46a20c(param_1 << 0x14);
  return piVar1;
}

