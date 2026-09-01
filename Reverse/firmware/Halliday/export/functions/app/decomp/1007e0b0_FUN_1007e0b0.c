/* FUN_1007e0b0 @ 0x1007e0b0 */

void FUN_1007e0b0(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5,uint param_6,
                 uint param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 auStack_39 [21];
  
  local_40 = *DAT_1007e1d0;
  local_3e = *(undefined1 *)(DAT_1007e1d0 + 1);
  piVar5 = *(int **)(param_1 + 0xc);
  FUN_101204f8();
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_101200fc(param_1,1);
    FUN_10120148(param_1,&local_40,3,0);
    if ((param_4 < 5) || ((param_7 & 1) != 0 || (param_4 & 3) != 0)) {
      if ((param_7 & 0x10) != 0) {
        FUN_10120148(param_1,param_3,param_4,0);
      }
    }
    else if ((param_7 & 0x14) == 0x14) {
      FUN_101201c6(param_1,param_3,param_4);
    }
    FUN_101200fc(param_1,0);
  }
  if ((param_5 != 0) && (0 < (int)param_6)) {
    uVar3 = (uint)*(byte *)(*piVar5 + 0xc);
    uVar1 = (uint)*(byte *)(*piVar5 + 0xb);
    local_3c = 0x84;
    iVar2 = uVar1 << 9;
    do {
      uVar4 = uVar3;
      if ((int)param_6 <= (int)uVar3) {
        uVar4 = param_6;
      }
      local_3b = (undefined1)((uint)iVar2 >> 8);
      local_3a = (undefined1)iVar2;
      FUN_1013d03e(auStack_39,param_5 + uVar1 * -0x200 + iVar2,uVar4,0x10);
      FUN_101200fc(param_1,1);
      FUN_10120148(param_1,&local_3c,uVar4 + 3,0);
      param_6 = param_6 - uVar3;
      FUN_101200fc(param_1,0);
      iVar2 = iVar2 + uVar3;
    } while (0 < (int)param_6);
  }
  local_3c = 0x10;
  FUN_10120388(&local_3b,param_2);
  FUN_101200fc(param_1,1);
  FUN_10120148(param_1,&local_3c,4,0);
  FUN_101200fc(param_1,0);
  return;
}

