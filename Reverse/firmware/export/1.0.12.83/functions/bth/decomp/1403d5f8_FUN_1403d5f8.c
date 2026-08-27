/* FUN_1403d5f8 @ 0x1403d5f8 */

void FUN_1403d5f8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_a0;
  undefined4 local_9f;
  undefined1 auStack_9b [127];
  int local_1c;
  
  local_1c = *DAT_1403d678;
  iVar2 = FUN_14053dc8(1,param_2,param_3,0);
  if (((iVar2 == 0) || (param_2 == (undefined4 *)0x0)) ||
     (iVar3 = *(int *)(iVar2 + param_1 * 4 + 0x14), iVar3 == 0)) {
    FUN_1402a6e8(4,0x103,DAT_1403d688,DAT_1403d684,DAT_1403d680,DAT_1403d67c,iVar2);
  }
  else {
    iVar2 = param_2[2];
    uVar1 = *(undefined2 *)(iVar3 + 0x10);
    local_9f = *param_2;
    local_a0 = 0;
    FUN_140e5278(auStack_9b,param_2[1],iVar2);
    FUN_1403d390(param_1,uVar1,iVar2 + 5U & 0xffff,&local_a0);
  }
  if (*DAT_1403d678 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

