import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
// import { SignupComponent } from './signup/signup.component';
import { LoginComponent } from './login/login.component';

const routes: Routes = [
  {path:"", component:LoginComponent},
  {path:"login", component:LoginComponent},
  // {path:"signup" , component:SignupComponent},

  {path:"admin", loadChildren:() =>import("./admin/admin.module").then(m=>m.AdminModule)},
  {path:"**", component:LoginComponent}
   
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
