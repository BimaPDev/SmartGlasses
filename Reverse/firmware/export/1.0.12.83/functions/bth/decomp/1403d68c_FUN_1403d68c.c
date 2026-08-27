/* FUN_1403d68c @ 0x1403d68c */

void FUN_1403d68c(int param_1,int *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_a0;
  undefined1 auStack_9f [131];
  int local_1c;
  
  local_1c = *DAT_1403d718;
  iVar2 = FUN_14053dc8(1,param_2,param_3,0);
  if ((iVar2 == 0) || (param_2 == (int *)0x0)) {
    FUN_1402a6e8(4,0x116,DAT_1403d728,DAT_1403d724,DAT_1403d720,DAT_1403d71c);
  }
  else {
    iVar3 = *param_2;
    uVar1 = *(undefined2 *)(*(int *)(iVar2 + param_1 * 4 + 0x14) + 0x10);
    iVar2 = param_2[3];
    local_a0 = 1;
    FUN_140e5278(auStack_9f,param_2[1],iVar3);
    FUN_140e5278(auStack_9f + iVar3,param_2[2],iVar2);
    FUN_1403d390(param_1,uVar1,iVar3 + iVar2 + 1U & 0xffff,&local_a0);
  }
  if (*DAT_1403d718 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

