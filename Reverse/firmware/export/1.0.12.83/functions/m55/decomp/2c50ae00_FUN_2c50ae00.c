/* FUN_2c50ae00 @ 0x2c50ae00 */

void FUN_2c50ae00(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  local_c = *DAT_2c50aea8;
  if ((bool)*(char *)((int)param_1 + 0x25) != ((char)param_1[9] == '\0')) {
    if ((char)param_1[9] == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    (**(code **)(*(int *)param_1[2] + 0x4c))((int *)param_1[2],DAT_2c50aeac,uVar1);
    (**(code **)(*(int *)param_1[2] + 0x38))
              ((int *)param_1[2],*(char *)((int)param_1 + 0x25) == '\0');
    FUN_2c50ad88(param_1);
    if (*(char *)((int)param_1 + 0x25) == '\0') {
      local_18 = 1;
    }
    else {
      local_18 = 2;
    }
    uVar1 = 1;
    uStack_14 = 0;
    FUN_2c5e317c(0x3f);
    FUN_2c620fa4(0x406,&local_18);
    pcVar2 = *(code **)(*param_1 + 0x3c);
    if (pcVar2 == DAT_2c50aeb0) {
      FUN_2c5d7694(9,0,0xffffffff,pcVar2,uVar1);
    }
    else {
      (*pcVar2)(param_1);
    }
  }
  if (*DAT_2c50aea8 != local_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

