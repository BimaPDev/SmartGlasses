/* FUN_2c4dd7f0 @ 0x2c4dd7f0 */

void FUN_2c4dd7f0(undefined4 param_1,int param_2,undefined1 *param_3,int param_4,undefined1 *param_5
                 ,int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *local_30;
  int local_2c;
  
  local_2c = *DAT_2c4dd8f8;
  if ((((param_3 != (undefined1 *)0x0) && (param_4 != 0)) && (param_5 != (undefined1 *)0x0)) &&
     (param_6 != 0)) {
    uVar7 = *(undefined4 *)(param_2 + 8);
    iVar3 = FUN_2c4dd5fa(param_1,uVar7,param_3,0);
    if (iVar3 != 0) {
      puVar5 = param_5 + param_6 + -4;
      local_30 = param_5;
      FUN_2c4dd620(param_1,&local_30,puVar5,param_2);
      FUN_2c4dd684(param_1,&local_30,puVar5,param_2);
      FUN_2c4dd644();
      iVar3 = FUN_2c66b4b8(local_30,DAT_2c4dd8fc,param_3,param_4);
      uVar2 = DAT_2c4dd904;
      uVar1 = DAT_2c4dd900;
      local_30 = local_30 + iVar3;
      iVar3 = 0;
      puVar4 = param_3;
      while( true ) {
        if (param_3 + param_4 <= puVar4) break;
        puVar6 = puVar4 + 1;
        FUN_2c66b4b8(local_30,uVar1,*puVar4);
        local_30 = local_30 + 3;
        if (param_7 != 0) {
          if (param_7 < iVar3) {
            FUN_2c6435c4(local_30,uVar2);
            local_30 = local_30 + 1;
            iVar3 = 0;
          }
          else {
            iVar3 = iVar3 + 1;
          }
        }
        puVar4 = puVar6;
        if (puVar5 < local_30) {
          FUN_2c4dd5ca(param_1,param_5,(int)local_30 - (int)param_5,uVar7);
          iVar3 = 0;
          local_30 = param_5;
        }
      }
      puVar4 = local_30 + 1;
      *local_30 = 10;
      local_30 = local_30 + 2;
      *puVar4 = 0;
      FUN_2c4dd5ca(param_1,param_5,local_30 + (-1 - (int)param_5),uVar7);
    }
  }
  if (*DAT_2c4dd8f8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

