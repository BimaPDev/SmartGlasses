/* FUN_100598fc @ 0x100598fc */

void FUN_100598fc(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (*(byte *)(*(int *)(param_1 + 8) + 0x2e) != param_2) {
    *(char *)(*(int *)(param_1 + 8) + 0x2e) = (char)param_2;
    if (param_2 == 0) {
      local_c = 0;
      piVar1 = DAT_10059940;
      local_10 = param_1;
    }
    else {
      local_10 = DAT_10059938;
      local_c = CONCAT22(0x6d,CONCAT11((char)param_2 + '/',0x33));
      piVar1 = &local_10;
    }
    uStack_8 = param_3;
    FUN_1011ae5e(*(undefined4 *)(param_1 + 0x14),DAT_1005993c,piVar1);
  }
  return;
}

