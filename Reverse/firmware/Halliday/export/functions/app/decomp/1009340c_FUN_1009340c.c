/* FUN_1009340c @ 0x1009340c */

void FUN_1009340c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_1012b06a(DAT_10093438);
  uVar1 = DAT_10093438;
  while ((piVar2 != (int *)0x0 &&
         ((*piVar2 != param_1 || ((piVar2[1] != param_2 && (param_2 != 0))))))) {
    piVar2 = (int *)FUN_1012b076(uVar1,piVar2);
  }
  return;
}

