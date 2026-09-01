/* FUN_100b9d28 @ 0x100b9d28 */

int FUN_100b9d28(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  char *local_14;
  
  FUN_100b9438();
  FUN_100b92a8(param_3,*param_4,0);
  iVar1 = FUN_100b93e4(0xc,&local_14);
  if (iVar1 != 0) {
    iVar2 = FUN_100b93e4(0xc,&local_14);
    if ((iVar2 == 0) || (*local_14 == '\0')) {
      FUN_100b93e4(0xfffffff4,&local_14);
      *param_4 = 0;
      return iVar1;
    }
    iVar1 = FUN_100b944c(param_4,param_3 == 0);
    if (iVar1 != 0) {
      iVar1 = FUN_100b9380();
      return iVar1;
    }
  }
  return 0;
}

