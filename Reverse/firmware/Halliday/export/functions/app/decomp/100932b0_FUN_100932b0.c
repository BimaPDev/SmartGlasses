/* FUN_100932b0 @ 0x100932b0 */

undefined4 FUN_100932b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_1012b06a(DAT_10093314);
  uVar2 = DAT_10093318;
  uVar1 = DAT_10093314;
  uVar5 = 0;
  while (piVar4 = piVar3, piVar4 != (int *)0x0) {
    piVar3 = (int *)FUN_1012b076(uVar1,piVar4);
    if (((*piVar4 == param_1) || (param_1 == 0)) && ((piVar4[1] == param_2 || (param_2 == 0)))) {
      FUN_1012b018(uVar1,piVar4);
      if ((code *)piVar4[4] != (code *)0x0) {
        (*(code *)piVar4[4])(piVar4);
      }
      FUN_10094268(piVar4,uVar2);
      uVar5 = 1;
      FUN_100930a8();
    }
  }
  return uVar5;
}

