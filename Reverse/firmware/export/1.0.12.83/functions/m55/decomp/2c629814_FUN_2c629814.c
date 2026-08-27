/* FUN_2c629814 @ 0x2c629814 */

int FUN_2c629814(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  *param_2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    puVar4 = param_1;
    do {
      iVar3 = (*(code *)*puVar4)(puVar4,param_2,param_3,param_4);
      if (iVar3 != 0) {
        if (-1 < (int)((uint)*(byte *)((int)param_2 + 0xe) << 0x1b)) {
          *param_2 = (int)puVar4;
          return iVar3;
        }
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = puVar4;
        }
      }
      puVar4 = (undefined4 *)puVar4[5];
    } while (puVar4 != (undefined4 *)0x0);
    if (puVar5 != (undefined4 *)0x0) {
      (*(code *)*puVar5)(puVar5,param_2,param_3,param_4);
      *param_2 = (int)puVar5;
      return 1;
    }
  }
  bVar6 = 0xf8fe < param_3;
  if (param_3 != 0xf8ff) {
    bVar6 = 0x1e < param_3;
  }
  if ((!bVar6 || (param_3 == 0xf8ff || param_3 == 0x1f)) || (param_3 == 0x200c)) {
    param_2[1] = 0;
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 2);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    sVar2 = (short)((uint)(iVar3 << 0xf) >> 0x10);
    *(short *)((int)param_2 + 6) = sVar2;
    *(short *)(param_2 + 1) = sVar2 + 2;
  }
  *param_2 = 0;
  uVar1 = *(undefined2 *)(param_1 + 2);
  *(undefined2 *)((int)param_2 + 10) = 0;
  *(undefined2 *)(param_2 + 2) = uVar1;
  *(undefined2 *)(param_2 + 3) = 0;
  *(byte *)((int)param_2 + 0xe) = *(byte *)((int)param_2 + 0xe) & 0xe0 | 0x11;
  return 0;
}

