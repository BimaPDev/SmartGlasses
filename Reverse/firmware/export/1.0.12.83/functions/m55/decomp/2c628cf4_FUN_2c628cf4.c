/* FUN_2c628cf4 @ 0x2c628cf4 */

uint FUN_2c628cf4(undefined4 *param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = param_2 - 1;
    uVar5 = 0;
    uVar2 = (uint)*(byte *)((int)param_1 + 5);
    do {
      uVar3 = uVar2 << 1;
      uVar2 = uVar3 & 0xff;
      *(char *)((int)param_1 + 5) = (char)uVar3;
      if ((char)(*(char *)(param_1 + 1) + -1) < '\0') {
        *(undefined1 *)(param_1 + 1) = 7;
        iVar1 = FUN_2c62de74(*param_1,(byte *)((int)param_1 + 5),1,0,param_4);
        *param_3 = (char)iVar1;
        if (iVar1 != 0) {
          return 0;
        }
        uVar2 = (uint)*(byte *)((int)param_1 + 5);
      }
      else {
        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + -1;
      }
      uVar3 = uVar4 & 0xff;
      uVar4 = uVar4 - 1;
      uVar5 = uVar5 | (uVar2 >> 7) << uVar3;
    } while (uVar4 != 0xffffffff);
  }
  *param_3 = 0;
  return uVar5;
}

