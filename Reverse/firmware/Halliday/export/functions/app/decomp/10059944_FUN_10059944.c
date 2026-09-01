/* FUN_10059944 @ 0x10059944 */

void FUN_10059944(int param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_100598fc(param_1,*param_2);
  cVar1 = param_2[1];
  if ((cVar1 != '\0') && (*(char *)(*(int *)(param_1 + 8) + 0x2f) != cVar1)) {
    local_18 = CONCAT13(cVar1 + '/',0x345b1b);
    *(char *)(*(int *)(param_1 + 8) + 0x2f) = cVar1;
    local_14 = (undefined1 *)CONCAT22(local_14._2_2_,0x6d);
    FUN_1011ae5e(*(undefined4 *)(param_1 + 0x14),DAT_1005998c,&local_18);
  }
  return;
}

