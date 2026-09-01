/* FUN_1011c672 @ 0x1011c672 */

bool FUN_1011c672(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_a8 [2];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [64];
  
  iVar3 = (int)param_4[1];
  cVar1 = *param_4;
  iVar2 = *(short *)(param_4 + 2) + 7;
  if (iVar2 < 0) {
    iVar2 = *(short *)(param_4 + 2) + 0xe;
  }
  local_a8[0] = auStack_a0;
  local_a8[1] = auStack_80;
  FUN_1011d2d4(auStack_a0,param_2,iVar2 >> 3);
  FUN_1011d2d4(auStack_60,param_1,iVar3);
  FUN_1011d2d4(auStack_60 + cVar1 * 4,param_1 + iVar3,iVar3);
  iVar2 = FUN_1011d1fe(auStack_a0,auStack_a0,auStack_80,param_4);
  FUN_1011d05c(auStack_60,auStack_60,local_a8[iVar2 == 0],0,
               (int)(short)(*(short *)(param_4 + 2) + 1),param_4);
  FUN_1011d2ac(param_3,iVar3,auStack_60);
  iVar2 = FUN_1011cf46(auStack_60,param_4);
  FUN_1011c5ca(local_a8);
  FUN_1011c5ca(auStack_80,0x20);
  FUN_1011c5ca(auStack_a0,0x20);
  return iVar2 == 0;
}

