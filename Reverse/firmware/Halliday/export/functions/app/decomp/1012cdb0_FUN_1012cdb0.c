/* FUN_1012cdb0 @ 0x1012cdb0 */

undefined4 FUN_1012cdb0(int *param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uStack_24;
  int iStack_20;
  
  uStack_24 = (uint)param_2 & 0xffffff;
  piVar5 = param_1;
  iStack_20 = param_3;
  if (param_1[4] != 0) {
    FUN_1013b40a();
    param_1[4] = 0;
  }
  iVar1 = FUN_100e8b10(param_3,(int)&uStack_24 + 3);
  if (-1 < iVar1) {
    piVar3 = param_2;
    if (iVar1 == 0x803) {
      if (param_3 == 0x1a) {
        piVar3 = param_2 + *param_2 + 1;
        param_2 = param_2 + 1;
      }
      else {
        piVar3 = param_2 + 0x100;
      }
    }
    param_1[5] = (int)piVar3;
    if (((uint)piVar3 & 0x3f) == 0) {
      *(undefined1 *)((int)param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x15) = 0x1f00;
      *param_1 = (param_4[2] + 1) - *param_4;
      param_1[1] = (param_4[3] + 1) - param_4[1];
      param_5 = param_5 * (uStack_24 >> 0x18);
      if (param_5 < 0) {
        param_5 = param_5 + 7;
      }
      bVar4 = iVar1 == 0x426;
      param_1[2] = param_5 >> 3;
      if (bVar4) {
        param_1[2] = (param_5 >> 3) + 3U & 0xfffffffc;
      }
      *(short *)((int)param_1 + 0xe) = (short)iVar1;
      *(bool *)(param_1 + 3) = bVar4;
      iVar2 = FUN_1013b39e(param_1,0,0xffffffff,bVar4,piVar5);
      if (iVar2 == 0) {
        if (iVar1 == 0x803) {
          FUN_1010e958(0x100,param_2);
        }
        return 1;
      }
    }
  }
  return 0;
}

