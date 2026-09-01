/* FUN_10120910 @ 0x10120910 */

void FUN_10120910(int *param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  
  bVar1 = *(byte *)(*(int *)param_1[3] + 0x1c);
  uVar2 = (uint)bVar1;
  if ((int)(uVar2 << 0x1b) < 0) {
    if (uVar2 != 0x10) goto LAB_1012092a;
  }
  else if ((bVar1 & 0xef) != 0) {
LAB_1012092a:
    if (*(char *)(*param_1 + 4) != '\x01') {
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 2) == 0) {
          if ((bVar1 & 4) == 0) {
            if ((int)(uVar2 << 0x1c) < 0) {
              FUN_1012065e(param_1);
            }
            else {
              pcVar3 = *(code **)(*param_1 + 0x11);
              if (pcVar3 != (code *)0x0) {
                (*pcVar3)(param_1);
              }
            }
          }
          else {
            FUN_1012079c(param_1);
          }
        }
        else {
          FUN_10120700(param_1);
        }
      }
      else {
        FUN_101205c2(param_1);
      }
      goto LAB_10120940;
    }
  }
  FUN_10120838(param_1);
LAB_10120940:
  FUN_101203a2(param_1);
  return;
}

