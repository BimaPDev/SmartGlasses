/* FUN_10057bdc @ 0x10057bdc */

char * FUN_10057bdc(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    FUN_10118a1c(param_2,param_3,DAT_10057bf8,param_1);
    pcVar1 = param_2;
  }
  return pcVar1;
}

