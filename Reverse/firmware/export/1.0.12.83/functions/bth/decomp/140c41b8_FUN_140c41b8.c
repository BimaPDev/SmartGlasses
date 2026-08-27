/* FUN_140c41b8 @ 0x140c41b8 */

int * FUN_140c41b8(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  uVar3 = *(undefined4 *)(iVar2 + -0xc);
  FUN_140c3dbc(param_1,uVar3,param_3,DAT_140c4228,param_1,param_2);
  iVar1 = FUN_140c3dd8(param_1,param_2);
  if ((iVar1 == 0) && (*(int *)(iVar2 + -4) < 1)) {
    if ((uint)(param_2 - iVar2) < param_3) {
      if (param_2 != iVar2) {
        FUN_140c3e0a(iVar2,param_2,param_3);
      }
    }
    else {
      FUN_140c3df2(iVar2,param_2,param_3);
    }
    FUN_140c3ed0(*param_1 + -0xc,param_3);
  }
  else {
    param_1 = (int *)FUN_140c4194(param_1,0,uVar3,param_2,param_3);
  }
  return param_1;
}

