/* FUN_1011ccc6 @ 0x1011ccc6 */

void FUN_1011ccc6(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 local_38;
  undefined1 auStack_34 [28];
  
  FUN_1011ea48(auStack_34,0,0x1c);
  cVar1 = *param_3;
  local_38 = 3;
  FUN_1011cb6c(param_1,param_2,param_3);
  FUN_1011c9ee(param_1,param_1,&local_38,param_3 + 4,(int)cVar1);
  FUN_1011cb4c(param_1,param_1,param_2,param_3);
  FUN_1011c9b6(param_1,param_1,param_3 + 0x84,param_3 + 4,(int)cVar1);
  return;
}

