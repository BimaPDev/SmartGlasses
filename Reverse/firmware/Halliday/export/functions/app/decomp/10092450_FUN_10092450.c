/* FUN_10092450 @ 0x10092450 */

void FUN_10092450(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_1012a564(&local_20);
  local_20 = param_1;
  local_14 = param_2;
  piVar2 = (int *)FUN_1012b06a(DAT_10092498);
  uVar1 = DAT_10092498;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)FUN_1012b076(uVar1,piVar2)) {
    if ((*piVar2 == local_20) && ((code *)piVar2[1] != (code *)0x0)) {
      local_1c = piVar2[2];
      local_18 = piVar2[3];
      (*(code *)piVar2[1])(piVar2,&local_20);
    }
  }
  return;
}

