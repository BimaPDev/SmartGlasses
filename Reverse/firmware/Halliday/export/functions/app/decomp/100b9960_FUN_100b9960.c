/* FUN_100b9960 @ 0x100b9960 */

bool FUN_100b9960(int *param_1)

{
  int *piVar1;
  int local_c;
  
  FUN_100b93e4(0,&local_c);
  piVar1 = DAT_100b9984;
  *param_1 = local_c - *DAT_100b9984;
  return piVar1[3] == 0;
}

